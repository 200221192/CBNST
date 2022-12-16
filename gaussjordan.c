#include<stdio.h>
// gauss jordan method
 int main() 
 { 
    int i,j,k,n;
     float A[20][20],c,x[10];
      printf("\nEnter the size of matrix: ");
       scanf("%d",&n);
        printf("\nEnter the elements of augmented matrix row-wise:\n");
         for(i=0; i<n; i++) 
         {
             for(j=0; j<(n+1); j++) 
             { 
                scanf("%f",&A[i][j]); 
             } 
        } 

/* Now finding the elements of diagonal matrix */ 
for(j=0; j<n; j++)
{
 for(i=0; i<n; i++) 
 {
   if(i!=j) 
    { 
      c=A[i][j]/A[j][j];
      for(k=0; k<n+1; k++) 
       {
         A[i][k]=A[i][k]-c*A[j][k]; 
       }        
    }   
 } 
} 
printf("\n\n"); 
printf("Diagonal matrix\n"); 
for(i=0; i<n; i++) 
{
 for(j=0; j<(n+1); j++)
  {
   printf("%f ",A[i][j]);
  } 
   printf("\n"); 
 }
 printf("\nThe solution is:\n"); 
 for(i=0; i<n; i++) 
 {
  x[i]=A[i][n]/A[i][i]; 
  printf("\n x%d=%f\n",i,x[i]);
 }
 return(0);
}