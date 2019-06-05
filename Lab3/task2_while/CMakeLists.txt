# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab3")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task2_while mainwhile.c)
add_executable (task2_while task1.c)
add_executable (task2_while task2.c)
add_executable (task2_while task3.c)
add_executable (task2_while task4.c)
add_executable (task2_while task5.c)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.