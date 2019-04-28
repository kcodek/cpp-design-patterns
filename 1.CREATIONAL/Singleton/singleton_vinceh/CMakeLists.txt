cmake_minimum_required(VERSION 3.12)
project(singleton_vinceh
        VERSION 1.0.0
        DESCRIPTION "Singleton Method Pattern by Vince Houston")


add_executable(singleton_before)
target_sources(singleton_before PRIVATE singleton_before.cpp)
target_compile_features(singleton_before PRIVATE cxx_std_14) 

add_executable(singleton_after)
target_sources(singleton_after PRIVATE singleton_after.cpp)
target_compile_features(singleton_after PRIVATE cxx_std_14) 


add_executable(singleton_demo_1)
target_sources(singleton_demo_1 PRIVATE singleton_demo_1.cpp)
target_compile_features(singleton_demo_1 PRIVATE cxx_std_14) 


add_executable(singleton_demo_2)
target_sources(singleton_demo_2 PRIVATE singleton_demo_2.cpp)
target_compile_features(singleton_demo_2 PRIVATE cxx_std_14) 

add_executable(singleton_demo_3)
target_sources(singleton_demo_3 PRIVATE singleton_demo_3.cpp)
target_compile_features(singleton_demo_3 PRIVATE cxx_std_14) 

add_executable(singleton_demo_4)
target_sources(singleton_demo_4 PRIVATE singleton_demo_4.cpp)
target_compile_features(singleton_demo_4 PRIVATE cxx_std_14) 

add_executable(singleton_demo_5)
target_sources(singleton_demo_5 PRIVATE singleton_demo_5.cpp)
target_compile_features(singleton_demo_5 PRIVATE cxx_std_14) 
