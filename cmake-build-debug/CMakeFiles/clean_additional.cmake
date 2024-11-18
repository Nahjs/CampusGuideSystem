# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BJTU_Guide_autogen"
  "CMakeFiles\\BJTU_Guide_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BJTU_Guide_autogen.dir\\ParseCache.txt"
  )
endif()
