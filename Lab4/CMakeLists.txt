# CMakeList.txt: ôàéë ïðîåêòà CMake âåðõíåãî óðîâíÿ; ïðîâåäèòå ãëîáàëüíóþ êîíôèãóðàöèþ
# è âêëþ÷èòå ñþäà ïîäïðîåêòû.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab4")

# Âêëþ÷èòå ïîäïðîåêòû.
add_subdirectory ("task6")

add_executable (Lab4 task1.c task2.c task3.c task4.c task5.c)
