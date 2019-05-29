cmake_minimum_required (VERSION 2.6)
add_compile_options(-std=c++11)
project (ThreadPool)

add_library(
    threadPool 
    ThreadPool.h
    ThreadPool.cpp
)

add_executable(
    main 
    test.cpp
)

target_link_libraries(main threadPool)
