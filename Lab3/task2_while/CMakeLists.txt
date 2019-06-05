# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab3")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab3_taskwhile6 mainwhile.c)
add_executable (Lab3_taskwhile1 task1.c)
add_executable (Lab3_taskwhile2 task2.c)
add_executable (Lab3_taskwhile3 task3.c)
add_executable (Lab3_taskwhile4 task4.c)
add_executable (Lab3_taskwhile5 task5.c)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.