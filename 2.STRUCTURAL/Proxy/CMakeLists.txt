cmake_minimum_required(VERSION 3.12)

project(Proxy
        VERSION 1.0.0
        DESCRIPTION "Proxy Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(proxy_vinceh)
# add_subdirectory(proxy_schmidh)
