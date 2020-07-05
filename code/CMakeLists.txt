cmake_minimum_required(VERSION 2.8)
project(webcatcher)
find_package(Boost REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})
set(sources main.cpp
	CommandParser.cpp
	Parser.cpp
	Catcher.cpp
	Debugger.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
