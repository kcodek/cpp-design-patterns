cmake_minimum_required(VERSION 3.12)
project(visitor_schmidh
        VERSION 1.0.0
        DESCRIPTION "Static Visitor Pattern by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(static_visitor)
target_sources(static_visitor PRIVATE staticVisitor.cpp)
target_compile_features(static_visitor PRIVATE cxx_std_14) 
