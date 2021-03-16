## cmake常用命令
1. set 定义变量 set(XXX  value)
2. message("${xxxx}")打印变量
3. 设置编译模式 03表示最高级优化代码
    SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
    SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
4. 设置库输出路径LIBRARY_OUTPUT_PATH是cmake的缓存变量
SET(LIBRARY_OUTPUT_PATH ./outputlib)
5. 搜集当前所有的源文件
 aux_source_directory(. DIR_SUB2_SOURCE)
6. 搜集当前所有的cpp源文件
 file(GLOB SOURCE *.cpp)
7. 嵌套的子目录的cmakeList编写 
add_subdirectory(child1_sub)
add_subdirectory(child2_sub)
target_link_libraries(cmakeLearning
        test1（child1_sub的cmake生成的库）
        test2（child2_sub的cmake生成的库）
)
8. 编译时侵入头文件修改值configure_file
