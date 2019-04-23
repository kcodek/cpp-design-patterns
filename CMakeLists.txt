cmake_minimum_required(VERSION 3.12)

project(CPPDesignPatterns 
            VERSION 1.0.0
            DESCRIPTION "A quick  & comprehensive reference of design patterns using c++")

            
set(CMAKE_POSITION_INDEPENDENT_CODE ON)            


add_subdirectory(1.CREATIONAL)
add_subdirectory(2.STRUCTURAL)
add_subdirectory(3.BEHAVIORAL)


# Creational
# add_subdirectory(Builder)
# add_subdirectory(Factories)
# add_subdirectory(Prototype)
# add_subdirectory(Singleton)


# Structural
# add_subdirectory(Adapter)
# add_subdirectory(Bridge)
# add_subdirectory(Composite)
# add_subdirectory(Decorator)
# add_subdirectory(Facade)
# add_subdirectory(Flyweight)
# add_subdirectory(Proxy)
# add_subdirectory(NullObject)

# Behavioral
# add_subdirectory(Strategy)
# add_subdirectory(Template)
# add_subdirectory(Command)
# add_subdirectory(ChainOfResponsibility)
# add_subdirectory(Interpreter)
# add_subdirectory(Iterator)
# add_subdirectory(Memento)
# add_subdirectory(Observer)
# add_subdirectory(State)
# add_subdirectory(Visitor)
# add_subdirectory(Interpreter)