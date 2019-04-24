cmake_minimum_required(VERSION 3.12)

project(Facade
        VERSION 1.0.0
        DESCRIPTION "Facade Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(facade_vinceh)
# add_subdirectory(facade_schmidh)
