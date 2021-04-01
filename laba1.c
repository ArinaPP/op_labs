#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, x;
    float t;
    printf("Введите a \nA=");
    scanf("%d", &a);
    printf("Введите b \nB=");
    scanf("%d", &b);
    printf("Введите x \nX=");
    scanf("%d", &x);
    if (a + b < x)
    {
        t = (a + b) / (float)x;
    }
    if (a + b > x)
    {
        t = x / (float)(a + b);
    }
    if (a + b == x)
    {
        t = b / (float)x;
    }
    printf("result %.3f\n", t);

    return 0;
}
