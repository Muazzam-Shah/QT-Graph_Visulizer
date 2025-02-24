# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\graphvisulizer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\graphvisulizer_autogen.dir\\ParseCache.txt"
  "graphvisulizer_autogen"
  )
endif()
