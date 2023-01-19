

int main() {
 
 char grade;
 float Salary;
 
 
 printf("Enter The Grade");
grade = getchar();


 
printf("Enter the Salary");
scanf("%f",&Salary);
 
 
 switch(grade)
 {
     
     case'A':
     Salary = Salary * 1.25;
     break;
     
     case'B':
     Salary = Salary * 1.22;
     break;
     
     case'C':
     Salary = Salary * 1.18;
     break;
     
     default:
     Salary = Salary * 1.15;
     break;
     
 }
 
printf("The Revised Salary is %.2f",Salary);
 
  
   
   
}

