# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.0.0)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab1_task8 task7_main.c)

add_library(Task8_lib STATIC task7_func.c)
target_link_libraries (Lab1_task8 Task8_lib)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
