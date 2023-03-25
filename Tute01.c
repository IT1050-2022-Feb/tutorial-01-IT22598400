/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int i, marks = 0, totalMarks = 0;
   for(i=1; i <= 2; i++){
   
      printf("Enter the subject %d :", i);
      scanf("%d", &marks);
      totalMarks = marks + totalMarks;
   
   }
   
   printf("Average marks is %d", (totalMarks / 2));
  
  return 0;
}

