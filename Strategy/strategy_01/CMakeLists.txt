cmake_minimum_required(VERSION 3.12)
project(strategy_01
        VERSION 1.0.0
        DESCRIPTION "Strategy Pattern")

add_executable(strategy_static)
target_sources(strategy_static PRIVATE strategy_static.cpp)
target_compile_features(strategy_static PRIVATE cxx_std_14) 


add_executable(dynamic_static)
target_sources(dynamic_static PRIVATE dynamic_static.cpp)
target_compile_features(dynamic_static PRIVATE cxx_std_14) 