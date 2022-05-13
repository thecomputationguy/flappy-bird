cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")

project(flappy-bird)

add_executable(flappy-bird
main.cpp
Game.cpp
StateMachine.cpp
AssetManager.cpp
InputManager.cpp
SplashState.cpp
MainMenuState.cpp)

target_include_directories(flappy-bird PUBLIC ${PROJECT_SOURCE_DIR})

target_link_libraries(flappy-bird PUBLIC sfml-graphics sfml-audio sfml-window sfml-system)