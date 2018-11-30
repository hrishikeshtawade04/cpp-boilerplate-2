add_executable(shell-app main.cpp Parameters.cpp PIDController.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
