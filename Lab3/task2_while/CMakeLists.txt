# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab3")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab3_taskwhile6 "../task2_while/mainwhile.c")
add_executable (Lab3_taskwhile1 "../task2_while/task1.c")
add_executable (Lab3_taskwhile2 "../task2_while/task2.c")
add_executable (Lab3_taskwhile3 "../task2_while/task3.c")
add_executable (Lab3_taskwhile4 "../task2_while/task4.c")
add_executable (Lab3_taskwhile5 "../task2_while/task5.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.