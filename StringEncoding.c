// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char givenword[10];
   
  printf("Enter a Five Letter Word");
scanf("%s",givenword);


   
  givenword[0] =   givenword[0] - 30;
  givenword[1] =   givenword[1] - 30;
  givenword[2] =   givenword[2] - 30;
  givenword[3] =   givenword[3] - 30;
   givenword[4] =   givenword[4] - 30;
   
   
printf("The Encoded Word is %s",givenword);
  
  
   
   
}