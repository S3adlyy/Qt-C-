# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\stat_etab_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\stat_etab_autogen.dir\\ParseCache.txt"
  "stat_etab_autogen"
  )
endif()
