#include <stdio.h>
#include <math.h>
int main ()
{
    double x;
    printf("Введите х {-0.3<=x<=0.3}  ");
    scanf("%lf", &x);
    if ((x >= -0.3) && (x<= 0.3))
    {
        double y=sqrt(sin(2*x))+sqrt(sin(3*x));
        double z=pow(log(tan(y-M_PI/8)),0.25);
        printf("y(x)=%f \n", y);
        printf("z(x)=%f \n", z);
    }
    else
        printf("Недопустимо введенное значение \n");
    return 0;
}