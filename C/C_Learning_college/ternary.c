#include<stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Enter first number \n"); //Prompt the user to input first number
  scanf("%d", &num1);
  printf("Enter second number \n"); //Prompt the user to input second number
  scanf("%d", &num2);
  printf("Enter third number \n"); //Prompt the user to input third number
  scanf("%d", &num3);
  //Ternary operators to find largest number and to handle equal numbers
    (num1 >= num2 && num1 >= num3) ?
        (num1 == num2 && num1 == num3) ?
            printf("All numbers are equal.\n") :
            (num1 == num2) ?
                printf("First number and second number are largest which is %d.\n", num1) :
                (num1 == num3) ?
                    printf("First number and third number are largest which is %d.\n", num1) :
                    printf("First number is largest which is %d.\n", num1) :
        (num2 >= num3) ?
            (num2 == num3) ?
                printf("Second number and third number are largest which is %d.\n", num2) :
                printf("Second number is largest which is %d.\n", num2) :
            printf("Third number is largest which is %d.\n", num3);

    return 0;

}
