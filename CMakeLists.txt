cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("Shortest Path Computation ${EXERCISE_ID}")

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

message("Making ${EXERCISE_ID}")    

if(EXERCISE_ID STREQUAL "main")
	add_executable (main main.cpp shortest_path.cpp) 
else()
	add_executable (${EXERCISE_ID} exercises/${EXERCISE_ID}.cpp shortest_path.cpp)	
endif()

