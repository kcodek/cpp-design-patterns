cmake_minimum_required(VERSION 3.12)
project(visitor_schmidh
        VERSION 1.0.0
        DESCRIPTION "Double Dispatch Visitor Pattern by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(double_dispatch_visitor)
target_sources(double_dispatch_visitor PRIVATE dynamicVisitor.cpp)
target_compile_features(double_dispatch_visitor PRIVATE cxx_std_14) 
