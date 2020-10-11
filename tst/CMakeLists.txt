cmake_minimum_required(VERSION 3.16)

set(TEST_EXECUTABLE_NAME "${PROJECT_NAME}_UT")
set(ISOLATOR_INCDIR /usr/include/typemock)
set(ISOLATOR_COMPILE_FLAGS -w -O0 -g3)
set(ISOLATOR_LIBDIR /usr/lib64/typemock)
set(CMAKE_EXE_LINKER_FLAGS -no-pie)
set(MOCKS mocks/secondModuleMock.hpp)
set(SOURCES testModule.cpp)

add_executable(${TEST_EXECUTABLE_NAME} ${SOURCES} ${MOCKS})
target_link_libraries(${TEST_EXECUTABLE_NAME} PUBLIC
    #    ${ISOLATOR_LIBDIR}/libisolator.a
    gtest
    gmock
    gtest_main
    gmock_main
    ${PROJECT_NAME})
#target_include_directories(${TEST_EXECUTABLE_NAME} PUBLIC ${ISOLATOR_INCDIR})
#target_compile_options(${TEST_EXECUTABLE_NAME} PUBLIC ${ISOLATOR_COMPILE_FLAGS})

add_test(NAME ${TEST_EXECUTABLE_NAME}
         COMMAND ${TEST_EXECUTABLE_NAME})
