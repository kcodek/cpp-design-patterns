cmake_minimum_required(VERSION 3.12)
project(iterator_vinceh
        VERSION 1.0.0
        DESCRIPTION "iterator Pattern by Vince Houston")

add_executable(iterator_demo_1)
target_sources(iterator_demo_1 PRIVATE iterator_demo_1.cpp)
target_compile_features(iterator_demo_1 PRIVATE cxx_std_14) 

add_executable(iterator_demo_2)
target_sources(iterator_demo_2 PRIVATE iterator_demo_2.cpp)
target_compile_features(iterator_demo_2 PRIVATE cxx_std_14) 

add_executable(iterator_demo_3)
target_sources(iterator_demo_3 PRIVATE iterator_demo_3.cpp)
target_compile_features(iterator_demo_3 PRIVATE cxx_std_14) 


add_executable(iterator_demo_4)
target_sources(iterator_demo_4 PRIVATE iterator_demo_4.cpp)
target_compile_features(iterator_demo_4 PRIVATE cxx_std_14) 

add_executable(iterator_demo_5)
target_sources(iterator_demo_5 PRIVATE iterator_demo_5.cpp)
target_compile_features(iterator_demo_5 PRIVATE cxx_std_14) 
