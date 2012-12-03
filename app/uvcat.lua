package.path = 'app/?.lua;;'

local utils = require('utils')
local uv    = require('uv')
local ffi   = require('ffi')

local open_req  = uv.fs_t()
local read_req  = uv.fs_t()
local write_req = uv.fs_t()

local buffer = ffi.new('char*[?]', 1024)
local len    = ffi.new('size_t', 1024)

local on_read = function(req)
  -- print(req.result)
  -- uv.fs_req_cleanup(req)
  print(ffi.string(buffer, len))
  uv.fs_req_cleanup(req)
end

local on_open = function(req)
  if req.result ~= -1 then
    uv.fs_read(uv.default_loop(), read_req, req.result, buffer, len, -1, on_read);
  else
    print(uv.strerror(uv.last_error(uv.default_loop())))
  end
  uv.fs_req_cleanup(req)
end

uv.fs_open(uv.default_loop(), open_req, "tmp/test.txt", uv.O_RDONLY, 0, on_open)
uv.run(uv.default_loop())
