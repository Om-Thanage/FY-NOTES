#include <stdio.h>
//16010123217 Om Thanage
int main() {
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort implementation
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int a;
    printf("\nEnter the number of elements you wish to insert: ");
    scanf("%d", &a);
    int newArr[n + a]; // Creating a new array with the desired size
    printf("Enter the elements: ");
    for (i = 0; i < n + a; i++) {
        if (i >= n) {
            scanf("%d", &newArr[i]);
        } else {
            newArr[i] = arr[i];
        }
    }

    // Applying bubble sort to the new array
    for (i = 0; i < n + a - 1; i++) {
        for (j = 0; j < n + a - i - 1; j++) {
            if (newArr[j] > newArr[j + 1]) {
                // Swap elements
                temp = newArr[j];
                newArr[j] = newArr[j + 1];
                newArr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array with inserted elements: ");
    for (i = 0; i < n + a; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
