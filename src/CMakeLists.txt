set(COMMON_SRC sum.cpp)

if(IDF_TARGET STREQUAL linux)
  idf_component_register(SRCS ${COMMON_SRC} INCLUDE_DIRS . REQUIRES driver)
else()
  idf_component_register(
    SRCS
    ${COMMON_SRC}
    app_main.cpp
    INCLUDE_DIRS
    .
    REQUIRES
    driver)
endif()
