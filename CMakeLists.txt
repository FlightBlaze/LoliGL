cmake_minimum_required(VERSION 3.13)
project(LoliGL C)

if(NOT WIN32)
    file(GLOB_RECURSE BIN bin/*.so)
else()
    file(GLOB_RECURSE BIN bin/*.dll)
endif()

set(MAJOR "0")
set(MINOR "1")
set(PATCH "0")
add_definitions(-DLOLIGL_VERSION="${MAJOR}.${MINOR}.${PATCH}")

file(GLOB_RECURSE INCLUDE include/*.h)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

add_library(LoliGL SHARED ${INCLUDE} src/loli_opengl.c)
target_link_libraries(LoliGL ${BIN} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
set_target_properties(LoliGL PROPERTIES PREFIX "")
set_target_properties(LoliGL PROPERTIES OUTPUT_NAME "GL")