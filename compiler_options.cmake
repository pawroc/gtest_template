######################### 
# Options
#
option(BUILD_UT "Builds UTs" OFF)

#########################
# Variables
#
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(BUILD_TESTING)
    #add_compile_options(-w -O0 -g3 -m64)
    #    set(CMAKE_EXE_LINKER_FLAGS -no-pie)
endif()
#########################
# Compiler flags
