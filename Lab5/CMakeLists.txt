# CMakeList.txt: ���� ������� CMake �������� ������; ��������� ���������� ������������
# � �������� ���� ����������.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab5")

# �������� ����������.
add_subdirectory ("task3")
add_subdirectory ("task4")
add_subdirectory ("task5")
add_subdirectory ("task6")

add_executable (Lab5_task1 task1.c)
add_executable (Lab5_task2 task2.c)