#include<stdio.h>
#include<math.h>
int main()
{
int n;
float x, y=0, p;
printf("Enter the number of terms: ");
scanf("%d",&n);
float a[n]; float b[n];
printf("Enter the values of x:\n");
for(int i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
printf("Enter the values of y:\n");
for(int i=0;i<n;i++)
{
scanf("%f",&b[i]);
}
printf("Enter the value of x for which y needs to be found: ");
scanf("%f",&x);
for(int i=0;i<n;i++)
{ 
    p=1;
for(int j=0;j<n;j++)
{
if(i!=j)
{
     p = p * (x - a[j])/(a[i] - a[j]);
} 
}
y = y + p * b[i];
}
printf("Value at %f is %f.", x, y); return 0; }