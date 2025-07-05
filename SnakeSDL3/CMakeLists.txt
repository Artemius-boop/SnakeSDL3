# CMakeList.txt : CMake project for SnakeSDL3, include source and define
# project specific logic here.
#

# Add source to this project's executable.

find_package(SDL3 REQUIRED)

add_executable (SnakeSDL3 "SnakeSDL3.cpp" "SnakeSDL3.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SnakeSDL3 PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(SnakeSDL3 PRIVATE SDL3::SDL3)

# TODO: Add tests and install targets if needed.
