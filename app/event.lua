local ffi = require('ffi')

ffi.cdef([[
  enum {
    EV_TIMEOUT = 0x01,
    EV_READ    = 0x02,
    EV_WRITE   = 0x04,
    EV_SIGNAL  = 0x08,
    EV_PERSIST = 0x10,
    EV_ET      = 0x20
  }

  // Types
  typedef struct timeval* timeval;
  typedef struct event_base* event_base;
  typedef struct event* event;
  typedef ]] .. (ffi.os == "Windows" and "intptr_t" or "int") .. [[ evutil_socket_t;

  // Callbacks
  typedef void (*event_callback_fn)(evutil_socket_t, short, void *);

  // Functions
  event_base event_base_new(void);
  int event_base_loopexit(event_base, const timeval);
  int event_base_loop(event_base, int);

  event event_new(event_base, evutil_socket_t, short, event_callback_fn, void *);
  int event_assign(event, event_base, evutil_socket_t, short, event_callback_fn, void *);
  int event_add(event, const timeval);
  int event_del(event);

  typedef struct env_args {
    event event;
  } env_args;

]])

local utils  = require('utils')
local Object = require('object')
local lib    = ffi.load('libevent.dylib')

local Event = Object:extend()

function Event:initialize(base, fd, flags, callback)
  self.env = ffi.new('event[1]')
  self.env[0] = lib.event_new(base, fd, flags, callback, self.env)
  lib.event_add(self.env[0], ffi.new('const timeval'))
end

local libevent = {
  lib   = lib,
  Event = Event
}

setmetatable(libevent, {
  __index = function(_, idx)
    return libevent.lib[idx]
  end
})

return libevent
