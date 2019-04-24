cmake_minimum_required(VERSION 3.12)
project(factories_vinceh
        VERSION 1.0.0
        DESCRIPTION "Factory Patterns by Vince Houston")


add_executable(factory_method_before)
target_sources(factory_method_before PRIVATE factory_method_before.cpp)
target_compile_features(factory_method_before PRIVATE cxx_std_14) 

add_executable(factory_method_after)
target_sources(factory_method_after PRIVATE factory_method_after.cpp)
target_compile_features(factory_method_after PRIVATE cxx_std_14) 


add_executable(factory_method_demo)
target_sources(factory_method_demo PRIVATE factory_method_demo.cpp)
target_compile_features(factory_method_demo PRIVATE cxx_std_14) 


add_executable(abstract_factory_before)
target_sources(abstract_factory_before PRIVATE abstract_factory_before.cpp)
target_compile_features(abstract_factory_before PRIVATE cxx_std_14) 

add_executable(abstract_factory_after)
target_sources(abstract_factory_after PRIVATE abstract_factory_after.cpp)
target_compile_features(abstract_factory_after PRIVATE cxx_std_14) 


add_executable(abstract_factory_demo)
target_sources(abstract_factory_demo PRIVATE abstract_factory_demo.cpp)
target_compile_features(abstract_factory_demo PRIVATE cxx_std_14) 