#include <stdio.h>

int main() {
    //Declaring variables
    int num1, num2, num3;

    //Input for the first number
    printf("Enter first number: \n");
    scanf("%d", &num1);

    //Input for the second number
    printf("Enter second number: \n");
    scanf("%d", &num2);

    //Input for the third number
    printf("Enter third number: \n");
    scanf("%d", &num3);

    //Checking the largest among three
    if (num1 >= num2 && num1 >= num3) {
        //Check for equal numbers
        if (num1 == num2 && num1 == num3) {
            printf("All numbers are equal.\n");
        }
        // Check if the first number is equal to the second number
        else if (num1 == num2) {
            printf("First number and second number are largest which is %d.\n",num1);
        }
        // Check if the first number is equal to the third number
        else if (num1 == num3) {
            printf("First number and third number are largest which is %d.\n", num1);
        }
        // If none of the above conditions are met, the first number is the largest
        else {
            printf("First number is largest which is %d.\n", num1);
        }
    }
    // Check if the second number is the largest
    else if (num2 >= num1 && num2 >= num3) {
        // Check if the second number is equal to the third number
        if (num2 == num3) {
            printf("Second number and third number are largest which is %d.\n",num2);
        }
        // If the above condition is not met, the second number is the largest
        else {
            printf("Second number is largest which is %d.\n",num2);
        }
    }
    // If none of the above conditions are met, the third number is the largest
    else {
        printf("Third number is largest which is %d.\n",num3);
    }

    return 0;

}


































/*#include<stdio.h>
int main ()
{
    int R_age, S_age, A_age; // Declaring variables

    printf("Enter the age of Ram \n"); //Prompt the user to input age of Ram
    scanf("%d", &R_age);

    printf("Enter the age of Shyam \n"); //Prompt the user to input age of Shyam
    scanf("%d", &S_age);

    printf("Enter the age of Ajay \n"); //Prompt the user to input age of Ajay
    scanf("%d", &A_age);

    if (R_age == A_age == S_age)
        {
            printf("All of them have same age");
        }

    else if (R_age<=S_age && R_age<=A_age) //Checks whether ram is youngest
    {
        if (R_age == S_age)
        {
            printf("Ram and Shyam are youngest");
        }
        else if (R_age == A_age)
        {
            printf("Ram and Ajay are youngest");
        }
        else
        {
            printf("Ram is youngest");
        }
    }
    else if(S_age<R_age && S_age<A_age) //Checks whether shyam is youngest
    {
        if (R_age == S_age)
        {
            printf("Ram and Shyam are youngest");
        }
        else if (S_age == A_age)
        {
            printf("Shyam and Ajay are youngest");
        }
        else
        {
            printf("Shyam is youngest");
        }
    }
    else
    {
        printf("Ajay is youngest");
    }
}
*/
//1.	Ask user to input three numbers. Compare three numbers to find the largest of them using
//a.	Nested if else statement
//b.	Using ternary operator


