cmake_minimum_required(VERSION 3.11)
project(test2)

set(CMAKE_CXX_STANDARD 14)

message("环境 $ENV{CXXFLAGS} -O3 -Wall")

#Release模式下的编译指令
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


#设置库输出路径
SET(LIBRARY_OUTPUT_PATH ./outputlib)


#搜集当前所有的源文件
aux_source_directory(. DIR_SUB2_SOURCE)

add_library(test2 STATIC  ${DIR_SUB2_SOURCE})
message(${DIR_SUB2_SOURCE})
#target_include_directories(
#        ${PROJECT_NAME}
#        PUBLIC ${PROJECT_SOURCE_DIR}
#)
