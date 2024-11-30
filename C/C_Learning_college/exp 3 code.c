//16010123217 Om Thanage
#include <stdio.h>

int main() {
    // Label for goto statement
    x:

    char choice;  // Stores user's choice

    // Display menu and prompt user for choice
    printf("\nEnter your choice\n");
    printf("a to check Palindrome\n");
    printf("b for Sum of Fibonacci series upto n terms\n");
    printf("c for Pattern like right angle triangle\n");

    scanf(" %c", &choice);  // Read user's choice

    switch (choice) {
        case 'a': {  // Palindrome check
            int num, reversed = 0, remainder, original_num;

            printf("Enter your number to check: ");
            scanf("%d", &original_num);

            num = original_num;

            // Reverse the number
            while (num != 0) {
                remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }

            if (original_num == reversed) {
                printf("The given number %d is palindrome\n", original_num);
            } else {
                printf("The given number %d is not palindrome\n", original_num);
            }

            break;
        }

        case 'b': {  // Fibonacci series and sum
            int a = 0, b = 1, n, c, sum = 0, i = 1;

            y:
            printf("Enter the value of n: ");
            scanf("%d", &n);

            if (n > 0)
            {

            printf("The Fibonacci series is:\n");

            do {
                printf("%3d", a);
                sum += a;
                c = a + b;
                a = b;
                b = c;
                i++;
            }

            while(i<=n);
            printf("\nThe sum of the series is: %d\n", sum);
            break;

            }
            else
            {
                printf("Invalid input\n");
                goto y;
            }
        }

        case 'c': {  // Right angle triangle pattern
            int p, q, number;

            printf("Enter number till which you want the pattern\n");
            scanf("%d", &number);

            for (p = 1; p <= number; ++p) {
                for (q = 1; q <= p; ++q) {
                    printf("%3d", p);
                }
                printf("\n");
            }

            break;
        }

        default:  // Invalid choice
            printf("Please enter proper character\n");
            goto x;  // Go back to the start of the menu
    }

    return 0;
}
