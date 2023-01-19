// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
 char grade;
 float Salary;
 
 
 printf("Enter The Grade");
grade = getchar();


 
printf("Enter the Salary");
scanf("%f",&Salary);

if(grade == 'A')
 
    
    Salary = Salary*1.25;
    
 
 else if(grade == 'B')
 
     Salary = Salary*1.22 ;
 
  else if(grade == 'C')
 
     Salary = Salary*1.18; 
     
     else
     
     Salary = Salary*1.15;
 
 
 printf("The Revised Salary is %.2f",Salary);
 
  
   
   
}