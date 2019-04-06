
#include <stdio.h>
#include <math.h>
#include "task5_func.c"
//36

void main(){
	float x = 5;
	float fx = func(x);
	printf("x =  %.4f\nf(x) = %.4f", x, fx);

	printf("\nEnter x:\n");
	scanf("%f", &x);
	fx = func(x);
	printf("x =  %.4f\nf(x) = %.4f\n", x, fx);

	system("pause");
    return 0;
}
