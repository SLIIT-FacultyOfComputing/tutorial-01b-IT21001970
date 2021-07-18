/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float amount1;
  float amount2;
  float finAmount;
  float distance ;

  printf("Input the distance the van has travelled : ");
  scanf("%f", &distance);

  printf("\n\n");

  if(distance > 30 )
  {
    amount1 = 30 * 50;
    amount2 =(distance - 30) * 40;

    finAmount = amount1 + amount2;

    printf(" Your final amount is %.2f/= ", finAmount);
  }

  else if(distance <= 30)
  {
    finAmount = distance * 50 ;
    printf("Your final amount is Rs %.2f/=", finAmount);
  }
  
  return 0;
}
