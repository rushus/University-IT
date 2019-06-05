# CMakeList.txt: ïðîåêò CMake äëÿ Lab1; âêëþ÷èòå èñõîäíûé êîä è îïðåäåëåíèÿ,
# óêàæèòå çäåñü ëîãèêó äëÿ êîíêðåòíîãî ïðîåêòà.
#
cmake_minimum_required (VERSION 3.0.0)

project ("Lab3")

# Äîáàâüòå èñòî÷íèê â èñïîëíÿåìûé ôàéë ýòîãî ïðîåêòà.
add_executable (task1_for mainfor.c task1.c task2.c task3.c task4.c task5.c)

# TODO: Äîáàâüòå òåñòû è öåëåâûå îáúåêòû, åñëè ýòî íåîáõîäèìî.
