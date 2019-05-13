cmake_minimum_required(VERSION 3.12)
project(visitor_schmidh
        VERSION 1.0.0
        DESCRIPTION "Visitor Pattern by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

# add_subdirectory(template_schmidh)
add_subdirectory(1-StaticVisitor)
add_subdirectory(2-DoubleDispatchVisitor)
add_subdirectory(3-MultiDispatchVisitor)
