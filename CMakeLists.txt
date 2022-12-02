cmake_minimum_required(VERSION 3.0.0)
project(demo VERSION 0.1.0)

message("CMAKE_SOURCE_DIR is " ${CMAKE_SOURCE_DIR})
message("PROJECT_SOURCE_DIR is " ${PROJECT_SOURCE_DIR})
message("CMAKE_CURRENT_SOURCE_DIR is " ${CMAKE_CURRENT_SOURCE_DIR})
message("CMAKE_CURRENT_LIST_DIR is " ${CMAKE_CURRENT_LIST_DIR})
set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})
message("PROJECT_ROOT_DIR is:" ${PROJECT_ROOT_DIR})

add_subdirectory(src)
set(SRC ${PROJECT_ROOT_DIR}/src)
set(INCLUDE ${PROJECT_ROOT_DIR}/include)
include_directories(${INCLUDE})
message("SRC is:" ${SRC})
message("INCLUDE is:" ${INCLUDE})

include(CTest)
enable_testing()

add_executable(demo 
    ${SRC}/main.c
    ${SRC}/test.c
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
