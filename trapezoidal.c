#include<stdio.h>
#include<math.h>
//#define f(x) sin(x)*sin(x)

#define f(x) 1/(1+(x*x))
int main ()
{
float a = 0;
float b = 6;
int n = 6;
float h = (b-a)/n;
float s = f(a)+f(b);
printf("\nValues of y:\n");
for (int i = 1; i < n; i++)
{
float y=2*f(a+i*h);
s =s+y;
printf("y%d = %f\n",i,y);
}
float integral = (h/2)*s;
printf("\nValue of integral is %6.4f\n", integral);
return 0;
}