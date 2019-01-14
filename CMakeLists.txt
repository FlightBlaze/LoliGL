cmake_minimum_required(VERSION 3.13)
project(LoliGL C)

set(CMAKE_C_STANDARD 99)

file(GLOB_RECURSE SRC src/*.c src/*.h)

if(NOT WIN32)
    file(GLOB_RECURSE BIN bin/*.so)
else()
    file(GLOB_RECURSE BIN bin/*.dll)
endif()

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

add_library(LoliGL SHARED ${SRC})
target_link_libraries(LoliGL ${BIN} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
set_target_properties(LoliGL PROPERTIES PREFIX "")
set_target_properties(LoliGL PROPERTIES OUTPUT_NAME "GL")