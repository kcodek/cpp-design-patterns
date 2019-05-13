cmake_minimum_required(VERSION 3.12)
project(visitor_schmidh
        VERSION 1.0.0
        DESCRIPTION "Factories by Hans-J. Schmid")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

# add_subdirectory(template_schmidh)
add_subdirectory(1-PointExample)
add_subdirectory(2-FactoryMethod)
add_subdirectory(3-Factory)
add_subdirectory(4-InnerFactory)
add_subdirectory(5-AbstractFactory)
add_subdirectory(6-FunctionalFactory)


