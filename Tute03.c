/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int a;
  int num;
  int total = 0 ;

  printf("Enter any number : ");
  scanf("%d",  &num);
  
  printf("\n\n");

  for( a=1 ; a <= num ; a++ )
  {
    total = total + a;

  }
      printf("total is %d\t", total);
  
  return 0;
}

