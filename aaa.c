#include <stdio.h>
#include <math.h>
int main()
{
double x;
printf ("Enter x { -10.0 <= x < 1.0 } {1.0 < x <= 10.0} -> ");
scanf ("%lf", &x );
if (-1.0 <= x && x <= 1.0)
{
double y = log(x) * ((1.0 + x)/(1.0 - x));
double z = (pow(y, 2.0))/(1.0 + y);
printf ("y(x) = %lf \n", y);
printf ("z(x) = %lf \n", z);
}
else
printf ("x value is incorrect !\n");
return 0;
}
