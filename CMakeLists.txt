cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(Learning LANGUAGES CXX)

# use solution folders in Visual Studio
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Add subdirectories
add_subdirectory(1.Basics)
add_subdirectory("9. Lembda Function")

