local utils = require('utils')
local io = io
local setmetatable = setmetatable

module(...)

-- local mt = { __index = _M }

function say(...)
  io.write(...)
end

local class_mt = {
    -- to prevent use of casual module global variables
    __newindex = function (table, key, val)
        error('attempt to write to undeclared variable "' .. key .. '"')
    end
}

setmetatable(_M, class_mt)