/*#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char character;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error in opening source file");
        return 1;
    }

    targetFile = fopen("destination.txt", "w");
    if (targetFile == NULL) {
        perror("Error in opening target file");
        fclose(sourceFile);
        return 1;
    }

    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copy success.\n");

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

// Function to transpose a matrix
void transposeMatrix(int **matrix, int rows, int cols) {

  // Dynamically allocate memory for the transpose matrix
  int **transpose = (int **)malloc(cols * sizeof(int *));
  for (int i = 0; i < cols; i++) {
    transpose[i] = (int **)malloc(rows * sizeof(int));
  }

  // Perform transpose operation
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      transpose[j][i] = matrix[i][j];
    }
  }

  // Print the transposed matrix
  printf("Transpose of the matrix:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%5d ", transpose[i][j]);
    }
    printf("\n");
  }

  // Free memory allocated for transpose matrix
  for (int i = 0; i < cols; i++) {
    free(transpose[i]);
  }
  free(transpose);
}

int main() {
  int rows, cols;

  // Input number of rows and columns of the matrix
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Dynamically allocate memory for the matrix
  int **matrix = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int **)malloc(cols * sizeof(int *));
  }

  // Input matrix elements
  printf("Enter matrix elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter the element at position [%d][%d]:\t",i+1,j+1);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Original matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%5d ", matrix[i][j]);
    }
    printf("\n");
  }

  transposeMatrix(matrix, rows, cols);

  return 0;
}*/
/*#include<stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while(*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, line_count = 1;
    char filename[100];

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count characters and lines
    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') {
            line_count++;
        }
    }

    printf("Number of characters: %d\n", char_count);
    printf("Number of lines: %d\n", line_count);

    fclose(fp);
    return 0;
}*/



