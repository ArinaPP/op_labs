#include <math.h>
#include <stdio.h>

//unsigned int gi(int x, int y, int f)
//{
  //  if (y = 0)
    //    return f;
  //  else

//}

unsigned int fi(int x, int y, int f)
{
    int i;
    if (y != 0)
        for (i = 1; i <= y; i++)
            f = f * x;
    return f;
}

int main()
{
    int x, y;
    int f = 1;
    printf("Введите число --> ");
    scanf("%d", &x);
    printf("Введите степень --> ");
    scanf("%d", &y);
    printf("Cycle = %d\n", f);
//    printf("Recursion = %d\n", gi);
    return 0;
}
