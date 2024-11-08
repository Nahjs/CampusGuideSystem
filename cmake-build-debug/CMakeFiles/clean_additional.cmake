# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CampusGuide_DP_QT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CampusGuide_DP_QT_autogen.dir\\ParseCache.txt"
  "CampusGuide_DP_QT_autogen"
  )
endif()
