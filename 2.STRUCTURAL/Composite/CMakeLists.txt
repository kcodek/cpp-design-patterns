cmake_minimum_required(VERSION 3.12)

project(Composite
        VERSION 1.0.0
        DESCRIPTION "Composite Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(composite_vinceh)
# add_subdirectory(composite_schmidh)
