cmake_minimum_required(VERSION 3.12)
project(strategy_schmidh
        VERSION 1.0.0
        DESCRIPTION "Strategy Pattern by Hans-J. Schmid")

add_executable(strategy_static)
target_sources(strategy_static PRIVATE strategy_static.cpp)
target_compile_features(strategy_static PRIVATE cxx_std_14) 


add_executable(strategy_dynamic)
target_sources(strategy_dynamic PRIVATE strategy_dynamic.cpp)
target_compile_features(strategy_dynamic PRIVATE cxx_std_14) 