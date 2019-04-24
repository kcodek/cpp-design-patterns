cmake_minimum_required(VERSION 3.12)
project(template_vinceh
        VERSION 1.0.0
        DESCRIPTION "Template Method Pattern by Vince Houston")


add_executable(template_before)
target_sources(template_before PRIVATE template_before.cpp)
target_compile_features(template_before PRIVATE cxx_std_14) 

add_executable(template_after)
target_sources(template_after PRIVATE template_after.cpp)
target_compile_features(template_after PRIVATE cxx_std_14) 


add_executable(template_demo_1)
target_sources(template_demo_1 PRIVATE template_demo_1.cpp)
target_compile_features(template_demo_1 PRIVATE cxx_std_14) 


add_executable(template_demo_2)
target_sources(template_demo_2 PRIVATE template_demo_2.cpp)
target_compile_features(template_demo_2 PRIVATE cxx_std_14) 

add_executable(template_demo_3)
target_sources(template_demo_3 PRIVATE template_demo_3.cpp)
target_compile_features(template_demo_3 PRIVATE cxx_std_14) 

add_executable(template_demo_5)
target_sources(template_demo_5 PRIVATE template_demo_5.cpp)
target_compile_features(template_demo_5 PRIVATE cxx_std_14) 