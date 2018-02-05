cmake_minimum_required(VERSION 3.9)
project(2DEngine_Server)

set(CMAKE_CXX_STANDARD 14)

add_executable(2DEngine_Server
        src/main.cpp
        src/Organism.cpp
        include/Organism.h
        src/Ai.cpp
        include/Ai.h
        src/Monster.cpp
        include/Monster.h
        src/Npc.cpp
        include/Npc.h
        src/Player.cpp
        include/Player.h src/Control.cpp include/Control.h include/Organism_Lists.h src/World.cpp include/World.h)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(2DEngine_Server ${SFML_LIBRARIES})
endif()