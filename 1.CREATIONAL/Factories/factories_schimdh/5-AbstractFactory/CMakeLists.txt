cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Abstract Factory by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(abstract_factory)
target_sources(abstract_factory PRIVATE AbstractFactory.cpp)
target_compile_features(abstract_factory PRIVATE cxx_std_14) 
