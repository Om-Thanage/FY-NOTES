#include <stdio.h>

int main() {
    int i, j, rows, col;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &col);


    int og_arr[rows][col], trans_arr[col][rows];

    // Input elements for the original array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter the element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &og_arr[i][j]);
        }
    }

    // Transpose the array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            trans_arr[j][i] = og_arr[i][j];
        }
    }

    // Display the original array
    printf("\nThe original array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", og_arr[i][j]);
        }
        printf("\n");
    }

    // Display the transposed array
    printf("\nThe transposed array is:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", trans_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

