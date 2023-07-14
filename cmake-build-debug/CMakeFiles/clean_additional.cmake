# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Login_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Login_autogen.dir\\ParseCache.txt"
  "Login_autogen"
  )
endif()
