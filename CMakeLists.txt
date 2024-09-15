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

# Set runtime library to dynamic
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")


# Google Test
# Download and unpack googletest at configure time
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# Now simnply link against gtest  or gtest_main as neeeded. Eg
add_executable(runTests ${PROJECT_PATH}/tests/test_math_operations.cpp ${PROJECT_PATH}/src/Calculator/MathOperation.cpp)
target_include_directories(runTests PRIVATE ${PROJECT_PATH}/src/Calculator)
target_link_libraries(runTests gtest_main)
add_test(NAME runtTests COMMAND runTests)