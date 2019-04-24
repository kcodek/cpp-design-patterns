cmake_minimum_required(VERSION 3.12)

project(Adapter
        VERSION 1.0.0
        DESCRIPTION "Adapter Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(adapter_vinceh)
# add_subdirectory(adapter_schmidh)
