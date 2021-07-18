/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1;
  int sub2;
  float avrg;

  printf("Enter marks of subject 1 : ");
  scanf("%d", &sub1);

  printf("Enter marks of subject 2 : ");
  scanf("%d", &sub2);

  avrg = (sub1 + sub2)/ 2;
  
  printf("\n\n");
  printf("Your average marks is %.2f", avrg);
  
  return 0;
}

