cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Functional Factory by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(functional_factory)
target_sources(functional_factory PRIVATE FunctionalFactory.cpp)
target_compile_features(functional_factory PRIVATE cxx_std_14) 
