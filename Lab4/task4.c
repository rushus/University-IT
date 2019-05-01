#include <stdio.h>
#include <math.h>

void sort(int *arr, int n)
{
  int step = 1;
  int *temp = (int*)malloc(n * sizeof(temp));
  while (step < n)
  {
    int id = 0;
    int l = 0;
    int m = l + step;
    int r = l + step * 2;
    do
    {
      m = m < n ? m : n;
      r = r < n ? r : n;
      int i1 = l, i2 = m;
      for (; i1 < m && i2 < r; )
      {
        if (arr[i1] < arr[i2]) { temp[id++] = arr[i1++]; }
        else { temp[id++] = arr[i2++]; }
      }

      while (i1 < m) temp[id++] = arr[i1++];
      while (i2 < r) temp[id++] = arr[i2++];
      l += step * 2;
      m += step * 2;
      r += step * 2;
    } while (l < n);
    for (int i = 0; i < n; i++)
      arr[i] = temp[i];
    step *= 2;
  }
}

void main()
{
    const int n = 6;
    int a[]={4,3,6,2,1,5};
    int i;
    sort(a, n);
    system("pause");
    return 0;
}
