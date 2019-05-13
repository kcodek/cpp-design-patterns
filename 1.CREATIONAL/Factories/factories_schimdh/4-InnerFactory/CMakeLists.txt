cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Inner Factory by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(inner_factory)
target_sources(inner_factory PRIVATE InnerFactory.cpp)
target_compile_features(inner_factory PRIVATE cxx_std_14) 
