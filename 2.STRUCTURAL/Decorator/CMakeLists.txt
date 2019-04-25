cmake_minimum_required(VERSION 3.12)

project(Decorator
        VERSION 1.0.0
        DESCRIPTION "Decorator Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(decorator_vinceh)
# add_subdirectory(decorator_schmidh)
