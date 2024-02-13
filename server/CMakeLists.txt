cmake_minimum_required(VERSION 3.8)

project(Messenger)

add_executable(Messenger src/main.cpp src/routes/register.cpp)

set_property(TARGET Messenger PROPERTY CXX_STANDARD 20)

target_include_directories(
    Messenger PRIVATE
    src/
    vendor/include/
)
