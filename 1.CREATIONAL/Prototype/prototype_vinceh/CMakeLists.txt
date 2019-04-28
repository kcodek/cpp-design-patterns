cmake_minimum_required(VERSION 3.12)
project(prototype_vinceh
        VERSION 1.0.0
        DESCRIPTION "Prototype Pattern by Vince Houston")


add_executable(prototype_before)
target_sources(prototype_before PRIVATE prototype_before.cpp)
target_compile_features(prototype_before PRIVATE cxx_std_14) 


add_executable(prototype_after)
target_sources(prototype_after PRIVATE prototype_after.cpp)
target_compile_features(prototype_after PRIVATE cxx_std_14) 


add_executable(prototype_demo_1)
target_sources(prototype_demo_1 PRIVATE prototype_demo_1.cpp)
target_compile_features(prototype_demo_1 PRIVATE cxx_std_14) 


add_executable(prototype_demo_2)
target_sources(prototype_demo_2 PRIVATE prototype_demo_2.cpp)
target_compile_features(prototype_demo_2 PRIVATE cxx_std_14) 


add_executable(prototype_demo_3)
target_sources(prototype_demo_3 PRIVATE prototype_demo_3.cpp)
target_compile_features(prototype_demo_3 PRIVATE cxx_std_14) 