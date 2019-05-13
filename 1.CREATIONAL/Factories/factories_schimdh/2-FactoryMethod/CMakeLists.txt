cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Factory Method by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(factory_method)
target_sources(factory_method PRIVATE FactoryMethod.cpp)
target_compile_features(factory_method PRIVATE cxx_std_14) 
