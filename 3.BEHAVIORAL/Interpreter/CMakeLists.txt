cmake_minimum_required(VERSION 3.12)

project(Interpreter
        VERSION 1.0.0
        DESCRIPTION "Composite Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(interpreter_vinceh)
# add_subdirectory(interpreter_schmidh)
