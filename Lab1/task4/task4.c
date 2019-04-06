#include <stdio.h>
#include <math.h>

//36
float x, result;

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

void func(){
	result = pow(cos(x), 2)+pow(cos(x), 4);
}
