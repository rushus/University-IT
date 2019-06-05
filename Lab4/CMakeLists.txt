# CMakeList.txt: файл проекта CMake верхнего уровн€; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab4")

# ¬ключите подпроекты.
add_subdirectory ("task6")

add_executable (Lab4_task1 "../task1.c")
add_executable (Lab4_task2 "../task2.c")
add_executable (Lab4_task3 "../task3.c")
add_executable (Lab4_task4 "../task4.c")
add_executable (Lab4_task5 "../task5.c")