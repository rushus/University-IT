#include <stdio.h>
#include <math.h>

//36 var
void main(){
	float x = 5;
	float fx = pow(cos(x), 2)+pow(cos(x), 4);
	printf("x =  %.4f\nf(x) = %.4f", x, fx);

	printf("\nEnter x:\n");
	scanf("%f", &x);
	fx = pow(cos(x), 2)+pow(cos(x), 4);
	printf("x =  %.4f\nf(x) = %.4f\n", x, fx);

	system("pause");
    return 0;
}
