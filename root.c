#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//roots of quadratic equation

int main()
{
    printf("enter the coeffiecients of the equation:\n");
    int coef[3];
    int pow[] = {2,1,0};
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d",&coef[i]);
    }
    float d = coef[1]*coef[1]-4*coef[0]*coef[2];
    printf("the quatratic equation is :\n");
    printf("%d x^2 + %d x^1 + %d",coef[0],coef[1],coef[2]);
    if(d == 0){
        float x = -(coef[1])/2.0*coef[0];
        printf("\nroots are real and equal: %f\n",x);
    }
    else if(d > 0){
        float x = (-coef[1]+sqrt(d))/(2*coef[0]);
        float y = (-coef[1]-sqrt(d))/(2*coef[0]);
        printf("\nroots are : %.2f %.2f", x , y);
    }
    else if(d < 0){
        printf("\nimaginary roots exits:\n");
        d = -1*d;
        printf("%.2f + (%.2f)i\n",coef[1]/2.0*coef[0],sqrt(d)/2.0*coef[0]);
        printf("%.2f - (%.2f)i\n",coef[1]/2.0*coef[0],sqrt(d)/2.0*coef[0]);
    } 
}