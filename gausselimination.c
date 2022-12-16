#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
// gauss elimination methos
int main() {
int coef[3][4]; 
printf("Enter the linear equation:\n"); 
for(int i=0; i<3;i++) { 
for(int j=0;j<4;j++) { 
    scanf("%d",&coef[i][j]); 
    } 
}
printf("\nAugmented matrix:\n"); 
for(int i=0; i<3;i++) { 
for(int j=0;j<4;j++) { 
printf("%d ",coef[i][j]); 
}
printf("\n"); 
}
printf("\n"); 
int a = coef[1][0]; 
if(coef[1][0]!=0) { 
    for(int i=0;i<4;i++) { 
        coef[1][i] = (coef[1][i]*coef[0][0])-(a*coef[0][i]);
} 
}
int b = coef[2][0]; 
if(coef[2][0]!=0) { 
    for(int i=0;i<4;i++) { 
    coef[2][i] = (coef[2][i]*coef[0][0])-(b*coef[0][i]); 
    }
}
int c = coef[2][1]; 
if(coef[2][1]!=0) { 
    for(int i=0;i<4;i++) { 
        coef[2][i] = (coef[2][i]*coef[1][1])-(coef[1][i]*c); 
    } 
}
printf("UTM:\n"); 
for(int i=0; i<3;i++) { 
    for(int j=0;j<4;j++) {
         printf("%d ",coef[i][j]);
        }
        printf("\n"); 
}
printf("\nSolution:\n"); 
float x,y,z; 
z = coef[2][3]/coef[2][2]; 
y = (coef[1][3] - (z*coef[1][2]))/coef[1][1];
x = (coef[0][3] - (y*coef[0][1]) - (z*coef[0][2]))/coef[0][0]; 
printf("x = %f\ny = %f\nz = %f",x,y,z); 
}