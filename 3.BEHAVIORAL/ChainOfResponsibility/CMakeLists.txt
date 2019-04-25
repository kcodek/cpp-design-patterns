cmake_minimum_required(VERSION 3.12)

project(ChainOfResponsibility
        VERSION 1.0.0
        DESCRIPTION "ChainOfResponsibility Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(chainofresponsibility_vinceh)
# add_subdirectory(chainofresponsibility_schmidh)
