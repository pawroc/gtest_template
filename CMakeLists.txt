cmake_minimum_required(VERSION 3.16)

project(gtest_template
                LANGUAGES CXX
                VERSION 0.0.1
                DESCRIPTION "Simpler implementation of std::string")


#######################
# Set include/find_package search PATH
#
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)


########################
# Compiler settings
#
include(compiler_options)

########################
# Helper functions
#
include(helper_functions)


########################
# Targets
#
set(SOURCES src/secondModule.cpp)

add_library(${PROJECT_NAME} OBJECT ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
    $<INSTALL_INTERFACE:inc> # <prefix>/include
    PRIVATE src)

target_link_libraries(${PROJECT_NAME} PUBLIC /usr/lib64/typemock/libisolator.a)

add_executable(${PROJECT_NAME}_EXE src/main.cpp)
target_link_libraries(${PROJECT_NAME}_EXE ${PROJECT_NAME})


#########################
# Copy compile_commands.json
#
copy_compile_commands(${PROJECT_NAME}_EXE)


########################
# Unit Tests
#
include(unit_tests)
