# The following lines of boilerplate have to be in your project's CMakeLists in
# this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

set(EXTRA_COMPONENT_DIRS src)
if(IDF_TARGET STREQUAL linux)
  # Don't change COMPONENTS on ESP32* targets, it removes a ton of defaults!
  list(APPEND COMPONENTS src tests)
  list(APPEND EXTRA_COMPONENT_DIRS tests $ENV{IDF_PATH}/tools/mocks/driver)
endif()

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(ESP32BuildSystem)
