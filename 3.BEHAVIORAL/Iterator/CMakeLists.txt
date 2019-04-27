cmake_minimum_required(VERSION 3.12)

project(Iterator
        VERSION 1.0.0
        DESCRIPTION "Iterator Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(iterator_vinceh)
# add_subdirectory(iterator_schmidh)
