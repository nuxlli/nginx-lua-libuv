if not ngx then
  package.path = 'app/?.lua;;'
  local ngx = require('ngx')
end

local utils = require('utils')
local uv    = require('uv')

local counter = 0
local idle = uv.idle_t()

uv.idle_init(uv.default_loop(), idle)
uv.idle_start(idle, function(handle, status)
  counter = counter + 1
  ngx.say("loop " .. counter)
  if (counter >= 10) then
    uv.idle_stop(handle)
  end
end)

local co = coroutine.create(function()
  uv.run(uv.default_loop())
end)

coroutine.resume(co)

ngx.say("end")