cmake_minimum_required(VERSION 3.12)

project(Builder
        VERSION 1.0.0
        DESCRIPTION "Builder Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(builder_vinceh)
# add_subdirectory(builder_schmidh)
