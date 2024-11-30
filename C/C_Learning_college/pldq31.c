#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number or x to exit: ");
        scanf("%d", &num);

        // Check for exit condition before counting
        if (num == 'x') {
            break;  // Exit the loop if user entered 'x'
        }

        // Count the number based on its sign
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }

        // Prompt for continuation
        do {
            printf("Do you want to enter another number (y/n)? ");
            scanf(" %c", &choice);  // Note the space before %c to consume newline

            // Check for valid input
            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                printf("Invalid input. Please enter y or n.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    } while (1);  // Loop indefinitely until 'x' is entered or valid choice is made

    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros: %d\n", zero);

    return 0;
}
