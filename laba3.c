// вар 5

#include <stdio.h>
#include <math.h>
int main()
{
  float x, h, f;
  unsigned long int i, n;
  printf("--> h\n");
  scanf("%f", &h);
  printf("x f(x)\n");
  printf("---------------------------\n");
  n = (3.0f / h);
  i = 0;
  do
  {
    if ((x >= 0.0f) && (x <= 1.5f))
    {
      f = pow(2.0f , x) - 2.0f + pow(x , 2.0f);
      printf("%f %f\n", x, f);
    }
    else
    {
      f = sqrt(x) * exp(pow(x , 2.0));
      printf("%f %f\n", x, f);
    }
    x = i * h;
    i = i + 1;
  }
  while (i <= n);
  return 0;
}
