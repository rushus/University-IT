#include <stdio.h>
#include <math.h>

void writeArray(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
