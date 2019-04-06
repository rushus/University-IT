#include <stdio.h>
#include "task1.c"
#include "task2.c"

void main(){
	printf("1 - Task 1\r\n2 - Task 2\r\n");
	float x, y;

	char answer = _getch();

	switch (answer)
	{
		case '1':
			printf("Task 1\nEnter x:\n");
			scanf("%f", &x);
			printf("Enter y:\n");
			scanf("%f", &y);
			isInArea(x, y) ? printf("In area.\n") : printf("Not in area.\n");
			break;

		case '2':
			printf("Task 2\nEnter x:\n");
			scanf("%f", &x);
			printf("%f\n", f(x));
			break;

		default:
			printf("Incorrect input.\n");
			break;
	}

	system("pause");
	return 0;
}
