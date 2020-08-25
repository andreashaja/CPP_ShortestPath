cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("Shortest Path Computation")

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

message("Making ${CODE_ID}")    

if(CODE_ID STREQUAL "main")
	add_executable (main main.cpp shortest_path.cpp) 
elseif(CODE_ID STREQUAL "ex_01")
	add_executable (${CODE_ID} main.cpp shortest_path.cpp)	
elseif(CODE_ID STREQUAL "ex_02")
	add_executable (${CODE_ID} exercises/${EXERCISE_ID}/main.cpp shortest_path.cpp)		
endif()

