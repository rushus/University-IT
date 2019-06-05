# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab2_task3 main.c)
add_executable (Lab2_task1 task1.c)
add_executable (Lab2_task2 task2.c)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.