# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab5")

# Включите подпроекты.
add_subdirectory ("task3")
add_subdirectory ("task4")
add_subdirectory ("task5")
add_subdirectory ("task6")

add_executable (Lab5 task1.c task2.c)
