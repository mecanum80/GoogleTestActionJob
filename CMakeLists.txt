cmake_minimum_required(VERSION 3.10)

# set the project name
project(SetUpGoogleTestActionJob VERSION 1.0)

# Define the project path
set(PROJECT_PATH ${CMAKE_SOURCE_DIR})

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)

# Source and header files
set(SOURCE
    ${PROJECT_PATH}/src/main.cpp
    ${PROJECT_PATH}/src/Calculator/MathOperation.cpp
)

set(HEADERS
    ${PROJECT_PATH}/src/Calculator/MathOperation.hpp
)

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCE} ${HEADERS})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_PATH}/src/Calculator)