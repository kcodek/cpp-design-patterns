cmake_minimum_required(VERSION 3.12)
project(interpreter_vinceh
        VERSION 1.0.0
        DESCRIPTION "Interpreter Pattern by Vince Houston")



add_executable(interpreter_demo_1)
target_sources(interpreter_demo_1 PRIVATE interpreter_demo_1.cpp)
target_compile_features(interpreter_demo_1 PRIVATE cxx_std_14) 

add_executable(interpreter_demo_2)
target_sources(interpreter_demo_2 PRIVATE interpreter_demo_2.cpp)
target_compile_features(interpreter_demo_2 PRIVATE cxx_std_14) 
