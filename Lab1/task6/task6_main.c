#include <stdio.h>
#include "task6_func.c"
extern float x, result;
extern void func();
void main(){
	x=5;
	func();
	printf("x =  %.4f\nf(x) = %.4f", x, result);

	printf("\nEnter x:\n");
	scanf("%f", &x);
	func();
	printf("x =  %.4f\nf(x) = %.4f\n", x, result);

	system("pause");
    return 0;
}
