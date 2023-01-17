file(GLOB_RECURSE SRC *.cpp)
idf_component_register(
  SRCS
  ${SRC}
  INCLUDE_DIRS
  .
  REQUIRES
  src
  WHOLE_ARCHIVE)

include(FetchContent)

set(INSTALL_GTEST
    OFF
    CACHE BOOL "" FORCE)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG main)
FetchContent_MakeAvailable(googletest)

target_link_libraries(${COMPONENT_LIB} PRIVATE GTest::gtest GTest::gmock)
