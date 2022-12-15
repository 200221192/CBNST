#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)

int main()
{
int n;
float upper, lower, h, integral = 0.0, k;
printf("Enter the lower limit: ");
scanf("%f", &lower);
printf("Enter the upper limit: ");
scanf("%f", &upper);
printf("Enter the no. of subintervals: ");
scanf("%d", &n);
h = (upper - lower) / n;
integral = f(lower) + f(upper);
for (int i = 1 ; i < n ; i++) 
{
k = lower + i * h;

// even term
if (i % 2 == 0)
{
integral = integral + 2 * f(k);
}

// odd term
else
{
integral = integral + 4 * f(k);
} 
}

integral = integral * (h / 3);
printf("the value of integral is : %f", integral);
return 0; }