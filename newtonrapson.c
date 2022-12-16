#include<stdio.h>
#include<stdlib.h>
#include<Math.h>
#define e 0.001 

double f(double x){
    return cos(x)-3*x+1;
}
double df(double x){
    return -(sin(x))-3;
}
int main(){
    int i = 1 ;
    double x0,x1,x2 , c;
    printf("Enter the value of x0 and x1");
    scanf("%lf %lf",&x0,&x1);
    x2 = (x1+x2)/2 ;
    do{
        c = f(x2);
        printf("\napproximation : %d", i );
        printf("\nvalue of x %lf", x2);
        printf("\nvalue of approximation: %lf",fabs(c));
        x2 = x2 - (c/df(x2));
        i++;

    }while(fabs(c)>0.00001);
    return 0 ;
}