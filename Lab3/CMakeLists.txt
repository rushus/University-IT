# CMakeList.txt: файл проекта CMake верхнего уровн€; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab3")

# ¬ключите подпроекты.
add_subdirectory ("task1_for")
add_subdirectory ("task2_while")
add_subdirectory ("task3_dowhile")