#include <math.h>
#include "func.h"

int findFirstElement(double eps)
{
    double a = 0;
    int i = 0;

    do
    {
        a = pow(-1,i)*((double)(2*(i+1))/(double)(2+(i+1)*(i-1)));

        if (fabs(a) <= eps)
        {
            return i+1;
            break;
        }

        ++i;
    } while (1);
}
