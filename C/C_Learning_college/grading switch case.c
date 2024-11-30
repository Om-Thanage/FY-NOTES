#include<stdio.h>
int main ()
{
    // Declaring variable to store marks
    int marks;

    //Input for marks
    printf("Enter your marks out of 100 \n");
    scanf("%d",&marks);

    //Check if entered marks are within the range (0 to 100)
    if (marks >= 0 && marks <= 100)
    {
    //Convert marks to a scale of 10 for grading
    marks /=10;

    //Using switch case to determine the grade
    switch (marks)
    {
    case 10:
    case 9:
        printf("You got grade A");
        break;

    case 8:
        printf("You got grade B");
        break;

    case 7:
        printf("You got grade C");
        break;

    case 6:
        printf("You got grade D");
        break;

    case 5:
        printf("You got grade E");
        break;

    default:printf("You got grade F");
    }
    }
    else
    {
        //If marks are outside valid range, display an error message
        printf("Please enter correct marks");
    }
    return 0;
}

