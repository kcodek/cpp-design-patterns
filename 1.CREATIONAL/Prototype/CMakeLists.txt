cmake_minimum_required(VERSION 3.12)

project(prototype
        VERSION 1.0.0
        DESCRIPTION "Prototype Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(prototype_vinceh)
# add_subdirectory(prototype_schmidh)
