cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(CppTraining CXX)

# use solution folders in Visual Studio
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

enable_testing()

add_subdirectory(1.Basics)
add_subdirectory(2.Arithematic)
add_subdirectory(4_Cpp_Software_Design)
add_subdirectory(5_STL_Allocators)
