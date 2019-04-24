cmake_minimum_required(VERSION 3.12)

project(STRUCTURAL 
            VERSION 1.0.0
            DESCRIPTION "STRUCTURAL - Adapter, Bridge, Composite, Decorator, Facade, Flyweight, Proxy, NullObject ")

            
set(CMAKE_POSITION_INDEPENDENT_CODE ON)            

# Structural
add_subdirectory(Adapter)
add_subdirectory(Bridge)
# add_subdirectory(Composite)
# add_subdirectory(Decorator)
add_subdirectory(Facade)
add_subdirectory(Flyweight)
add_subdirectory(Proxy)
# add_subdirectory(NullObject)
