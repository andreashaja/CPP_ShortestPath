cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("Shortest Path Computation")

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

message("Making ${CODE_ID}")    

if(CODE_ID STREQUAL "main")
	add_executable (main main.cpp shortest_path.cpp) 
elseif(CODE_ID STREQUAL "exe_01")
	add_executable (${CODE_ID} exercises/${CODE_ID}/main.cpp shortest_path.cpp)		
elseif(CODE_ID STREQUAL "exe_02")
	add_executable (${CODE_ID} exercises/${CODE_ID}/main.cpp shortest_path.cpp)			
elseif(CODE_ID STREQUAL "exa_01")
	add_executable (${CODE_ID} examples/${CODE_ID}/main.cpp shortest_path.cpp)		
elseif(CODE_ID STREQUAL "exa_02")
	add_executable (${CODE_ID} examples/${CODE_ID}/main.cpp shortest_path.cpp)			
endif()

