// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
 float F,p,i,n,r;
 
 printf("Enter the principal Amount");
 scanf("%f",&p);
 
printf("Enter the Number of years");
 scanf("%f",&n);
 
  	printf("Enter the rate fo interest");
 scanf("%f",&r);
 
 i = r/100;
 
F = p*pow(i+1,n);

printf("The Compounded Value for the rate of interest %.2f,and the number of years %.0f is %.2f", r,n,F);
 
 
 
 
}