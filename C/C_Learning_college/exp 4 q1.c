/*#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];


    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array using two pointers
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap the elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
*/
