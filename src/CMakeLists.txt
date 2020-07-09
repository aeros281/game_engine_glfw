set(HEADER_LIST "${game_engine_SOURCE_DIR}/include/modern/lib.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(game_engine_lib lib.cpp "")

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(game_engine_lib glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(game_engine_lib OpenGL::GL)

# WE need this directory, and users of our library will need it too
target_include_directories(game_engine_lib PUBLIC ../include)

# All users of this library will need at least C+11
target_compile_features(game_engine_lib PUBLIC cxx_std_11)

# IDEs should put the headers in a nice share
source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})

add_subdirectory(core)
