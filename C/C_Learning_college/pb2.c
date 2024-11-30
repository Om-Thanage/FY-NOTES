#include<stdio.h>
#include<math.h>

int main(){
  // Declare variables for principal amount, interest rate, time, and installment
  float P, r, n, E;

  // Prompt user to enter principal amount
  printf("\t Enter the value of principal amount (in rupees)\n");
  scanf("%f", &P);

  // Prompt user to enter interest rate
  printf("\t Enter the rate of interest\n");
  scanf("%f", &r);

  // Prompt user to enter time (in years)
  printf("\t Enter the time (in years)\n");
  scanf("%f", &n);

  // Convert time from years to months
  n = n * 12;

  // Convert annual interest rate to monthly interest rate
  r = r / 1200;

  // Calculate the monthly installment using the formula for EMI
  E = (P * r * pow((1 + r), n)) / (pow((1 + r), n) - 1);

  // Print the calculated monthly installment
  printf("The monthly installment is  Rs.%.2f\n", E);

  return 0;
}
