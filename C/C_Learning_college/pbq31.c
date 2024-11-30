#include <stdio.h>

int main() {
   int num, positive = 0, negative = 0, zeros = 0; //Declaring variables
   char choice;

   do {
       printf("Enter a number: "); //Prompt the user to enter the number
       scanf("%d", &num); //Storing number in variable num

       //Conditions
       if (num > 0) {
           positive++;
       } else if (num < 0) {
           negative++;
       } else {
           zeros++;
       }

       //Choice
       do {
           printf("Do you want to continue (y/n)? ");
           scanf(" %c", &choice);
           if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
               printf("Invalid choice. Please enter 'y' or 'n'.\n");
           }
       } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
   } while (choice == 'y' || choice == 'Y');

   printf("\nCount of positive numbers: %d\n", positive); //Printing count of positive numbers
   printf("Count of negative numbers: %d\n", negative); //Printing count of negative numbers
   printf("Count of zeros: %d\n", zeros); //Printing count of zeros

   return 0;
}

