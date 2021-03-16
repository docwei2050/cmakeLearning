cmake_minimum_required(VERSION 3.11)
project(cmakeLearning)

set(CMAKE_CXX_STANDARD 14)

#搜集当前所有的cpp源文件
file(GLOB SOURCE *.cpp)

#搜集当前所有的源文件
#aux_source_directory(. DIR_SOURCE)

add_subdirectory(child1_sub)
add_subdirectory(child2_sub)

add_executable(cmakeLearning ${SOURCE})
target_link_libraries(cmakeLearning
        test1
        test2
)
















#aux_source_directory(. DIR_SOURCE)
#aux_source_directory(child1_sub DIR_SOURCE1)
#aux_source_directory(child2_sub DIR_SOURCE2)
#add_executable(cmakeLearning ${DIR_SOURCE} ${DIR_SOURCE1} ${DIR_SOURCE2})

















#add_executable(
#        cmakeLearning
#        main.cpp
#        child1_sub/Test1.cpp
#        child1_sub/Test1.h
#        child2_sub/Test2.cpp
#        child2_sub/Test2.h)