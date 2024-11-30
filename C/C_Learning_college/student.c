/*#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
} arr_students[5];

void bubbleSort(struct student arr[], int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].age > arr[j + 1].age) {
                // Swapping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", arr_students[i].name);

        printf("Enter age: ");
        scanf("%d", &arr_students[i].age);
    }

    bubbleSort(arr_students, 5);

    printf("\nDisplaying Information:\n");
    printf("%-15s %-20s\n", "Name", "Age");
    for (i = 0; i < 5; i++) {
        printf("%-15s %-20d \n", arr_students[i].name, arr_students[i].age);
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
} arr_students[5];

void bubbleSort(struct student arr[], int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // First compare by age
            if (arr[j].age > arr[j + 1].age) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // If ages are equal, compare by name
            else if (arr[j].age == arr[j + 1].age) {
                if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                    // Swap arr[j] and arr[j+1]
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", arr_students[i].name);

        printf("Enter age: ");
        scanf("%d", &arr_students[i].age);
    }

    // Sort the students array by age and name
    bubbleSort(arr_students, 5);

    printf("\nDisplaying Information:\n");
    printf("%-15s %-20s\n", "Name", "Age");
    for (i = 0; i < 5; i++) {
        printf("%-15s %-20d \n", arr_students[i].name, arr_students[i].age);
    }

    return 0;
}
*/

#include <stdio.h>


int main() {
    int model;
    int numProduced;
    int lastSerialNumber;
    int firstSerialNumber;

    // Prompt for UPS model selection
    printf("Select UPS model (1 for Model A, 2 for Model B): ");
    scanf("%d", &model);

    // Calculate last serial number
    if (model == 1) {
        printf("Enter the serial number of first UPS model of Model A:\t");
        scanf("%d", &firstSerialNumber);

        // Prompt for number of UPS produced
        printf("Enter number of UPS produced: ");
        scanf("%d", &numProduced);
        lastSerialNumber = firstSerialNumber + numProduced;
        printf("Last serial number generated for Model A: %d\n", lastSerialNumber);
    } else if (model == 2) {
        printf("Enter the serial number of first UPS model of Model B:\t");
        scanf("%d", &firstSerialNumber);

        // Prompt for number of UPS produced
        printf("Enter number of UPS produced: ");
        scanf("%d", &numProduced);
        lastSerialNumber = firstSerialNumber + numProduced;
        printf("Last serial number generated for Model B: %d\n", lastSerialNumber);
    } else {
        printf("Invalid UPS model selection\n");
        main();
    }

    // Output last serial number



    return 0;
}
