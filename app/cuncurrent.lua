if not ngx then
  package.path = 'app/?.lua;;'
  local ngx = require('ngx')
end

local utils = require('utils')
function log(...)
  ngx.say(utils.dump({...}))
end

local ffi   = require('ffi')
local zmq   = require('zmq')
local event = require('event')

local context = zmq.zmq_ctx_new()

local responder = zmq.zmq_socket(context, zmq.ZMQ_REP)
zmq.zmq_bind(responder, "tcp://*:5555")

local fd = ffi.new('int[?]', 1, -1)
log(tonumber(fd[0]))

local fd_size = ffi.new('size_t[?]', 1, ffi.sizeof(fd))
zmq.zmq_getsockopt(responder, zmq.ZMQ_FD, fd, fd_size)

fd = ffi.cast('int', fd[0])
--fd = ffi.cast('int', io.open('uv.h'))

local print_line = function(fd, events, args)
  local env = ffi.cast('my_env*', args).event
  local events = ffi.new('int[1]', 1)
  zmq.zmq_getsockopt(responder, zmq.ZMQ_EVENTS, events, fd_size)
  log("event", events[0])
  if bit.band(events[0], zmq.ZMQ_POLLIN) == 1 then
    local request = ffi.new('zmq_msg_t[1]')
    zmq.zmq_msg_init(request)
    zmq.zmq_msg_recv(request, responder, 0)
    log(ffi.string(request[0]._))
    zmq.zmq_msg_close(request)
    event.event_base_loopexit(base, ffi.new('const timeval'))
    event.event_del(env)
  end
end

local base  = event.event_base_new()
local flags = bit.bor(event.EV_READ, event.EV_PERSIST)

local my_env = ffi.new('my_env')
local env    = event.event_new(base, fd, flags, print_line, my_env)
my_env.event = env
event.event_add(env, ffi.new('const timeval'))
event.event_base_loop(base, 0)

zmq.zmq_close(responder)
zmq.zmq_ctx_destroy(context)

ngx.say('Fim')
