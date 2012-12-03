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


function msg_recv(resp)
  local msg   = ""
  local msg_t = ffi.new('zmq_msg_t[1]')
  zmq.zmq_msg_init(msg_t)
  while true do
    local more = zmq.zmq_msg_recv(msg_t, resp, zmq.ZMQ_DONTWAIT)
    if more == -1 then break; end
    msg = (msg .. ffi.string(msg_t[0]._))
  end
  zmq.zmq_msg_close(msg_t)
  return msg
end

function get_fd(resp)
  msg_recv(resp)

  local fd = ffi.new('int[?]', 1, -1)
  local fd_size = ffi.new('size_t[?]', 1, ffi.sizeof(fd))

  zmq.zmq_getsockopt(resp, zmq.ZMQ_FD, fd, fd_size)

  return ffi.cast('int', fd[0])
end

local base  = event.event_base_new()
local flags = bit.bor(event.EV_READ, event.EV_PERSIST)

local print_line = function(fd, events, args)
  log('print_line', ffi.cast('event', args))
  local evt      = ffi.new('int[1]', 1)
  local evt_size = ffi.new('size_t[?]', 1, ffi.sizeof(evt))
  for i=1,events do
    zmq.zmq_getsockopt(responder, zmq.ZMQ_EVENTS, evt, evt_size)
    if bit.band(evt[0], zmq.ZMQ_POLLIN) == 1 then
      log("print_line", msg_recv(responder))
    end
  end
end

local fd  = get_fd(responder)
local env = event.Event:new(base, fd, flags, print_line)

assert(event.event_base_loop(base, 0))

zmq.zmq_close(responder)
zmq.zmq_ctx_destroy(context)

ngx.say('Fim')
