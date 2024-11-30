//16010123217 Om Thanage
/*#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b)
{
    // Base case: If 'a' is 0, then GCD is 'b'
    if (a == 0)
        return b;

    // Recursive call to gcd with 'b%a' as the new 'a' and 'a' as the new 'b'
    return gcd(b % a, a);
}

// Main function
int main()
{
    int num1, num2;

    printf("\tGCD calculator\t\n");

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Print the GCD of the two numbers
    printf("GCD of %d and %d is %d.", num1, num2, gcd(num1, num2));

    return 0;
}*/

//16010123217 Om Thanage
/*#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) using Euclid's algorithm
int gcd(int a, int b)
{
    // Base case: If 'a' is 0, then GCD is 'b'
    if (a == 0)
        return b;

    // Recursive call to gcd with 'b%a' as the new 'a' and 'a' as the new 'b'
    return gcd(b % a, a);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b)
{
    //Calculating LCM using gcd function
    return (a*b)/gcd(a,b);
}

// Main function
int main()
{
    int num1, num2;

    printf("\tLCM calculator\t\n");

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Print the LCM of the two numbers
    printf("\nLCM of %d and %d is %d.", num1, num2, lcm(num1, num2));

    return 0;
}

*/

/*#include <stdio.h>

int i; // Global variable for loop iteration

// Function to find the maximum element in an array
int max(int arr[], int n) {
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in an array
int min(int arr[], int n) {
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to calculate the sum of elements in an array
int sum(int arr[], int n) {
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Maximum is %d\n", max(arr, n));

    printf("Minimum is %d\n", min(arr, n));

    printf("Sum is %d\n", sum(arr, n));

    return 0;
}
*/
