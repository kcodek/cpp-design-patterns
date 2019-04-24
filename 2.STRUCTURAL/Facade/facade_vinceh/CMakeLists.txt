cmake_minimum_required(VERSION 3.12)
project(facade_vinceh
        VERSION 1.0.0
        DESCRIPTION "facade Pattern by Vince Houston")


add_executable(facade_before)
target_sources(facade_before PRIVATE facade_before.cpp)
target_compile_features(facade_before PRIVATE cxx_std_14) 

add_executable(facade_after)
target_sources(facade_after PRIVATE facade_after.cpp)
target_compile_features(facade_after PRIVATE cxx_std_14) 


add_executable(facade_demo)
target_sources(facade_demo PRIVATE facade_demo.cpp)
target_compile_features(facade_demo PRIVATE cxx_std_14) 
