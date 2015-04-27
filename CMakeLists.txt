cmake_minimum_required(VERSION 2.8)
project (test)

file(GLOB_RECURSE p_SOURCES "src/*.cpp")
file(GLOB_RECURSE p_HEADERS "src/*.h")

set (p_INCLUDE_DIRS "")
foreach (_headerFile ${p_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND p_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES p_INCLUDE_DIRS)

include_directories(${p_INCLUDE_DIRS})
add_executable (test_project ${p_SOURCES})