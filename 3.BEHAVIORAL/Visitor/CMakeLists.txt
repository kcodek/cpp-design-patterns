cmake_minimum_required(VERSION 3.12)

project(visitor
        VERSION 1.0.0
        DESCRIPTION "Visitor Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(visitor_vinceh)
# add_subdirectory(visitor_schmidh)
