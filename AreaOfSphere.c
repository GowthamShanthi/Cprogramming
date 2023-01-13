// Area Of Sphere Program 
#include <stdio.h>
#include <math.h>

int main(){
    
    
float r,Volume,Area;
float p = 22/7.0;

printf("Enter the radius");
scanf("%f",&r);

Volume = 4*p*(pow(r,3)/(float)(3));

Area = 4*p*pow(r,2);

printf("The Volume of the sphere is %f",Volume);
printf("The Area of the sphere is %f",Area);



    
}
 
 
 
 
