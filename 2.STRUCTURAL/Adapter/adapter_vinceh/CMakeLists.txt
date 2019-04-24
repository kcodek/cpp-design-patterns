cmake_minimum_required(VERSION 3.12)
project(adapter_vinceh
        VERSION 1.0.0
        DESCRIPTION "adapter Pattern by Vince Houston")


add_executable(adapter_before)
target_sources(adapter_before PRIVATE adapter_before.cpp)
target_compile_features(adapter_before PRIVATE cxx_std_14) 

add_executable(adapter_after)
target_sources(adapter_after PRIVATE adapter_after.cpp)
target_compile_features(adapter_after PRIVATE cxx_std_14) 


add_executable(adapter_demo_1)
target_sources(adapter_demo_1 PRIVATE adapter_demo_1.cpp)
target_compile_features(adapter_demo_1 PRIVATE cxx_std_14) 

add_executable(adapter_demo_2)
target_sources(adapter_demo_2 PRIVATE adapter_demo_2.cpp)
target_compile_features(adapter_demo_2 PRIVATE cxx_std_14) 
