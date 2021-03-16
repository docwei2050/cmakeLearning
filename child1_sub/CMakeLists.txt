cmake_minimum_required(VERSION 3.11)
project(test1)

set(CMAKE_CXX_STANDARD 14)

#Debug模式下的编译指令
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")


#侵入代码修改参数
set(self_define_Version "2.0.1")
configure_file(ver.h.in ${PROJECT_SOURCE_DIR}/ver.h)

#搜集所有的源文件
aux_source_directory(. DIR_SUB1_SOURCE)

#添加到库
add_library(test1 SHARED ${DIR_SUB1_SOURCE})
#设置库输出路径
SET(LIBRARY_OUTPUT_PATH ./outputlib)


#target_include_directories(
#        ${PROJECT_NAME}
#        PUBLIC ${PROJECT_SOURCE_DIR}
#)