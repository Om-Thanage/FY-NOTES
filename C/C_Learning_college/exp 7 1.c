/*#include <stdio.h>

// Define a student structure to store information about each student
struct students {
    char name[50];       // Character array to store the student's name (up to 49 characters)
    int roll_number; // integer to store the student's roll number
    float percentage;     // Float to store the student's percentage
};

// Array to store information for 10 students
struct students arr_students[10];

int main() {
    int i;

    // Loop to take input for each student
    for (i = 0; i < 10; i++) {
        printf("Student %d\n", i + 1); // Print student number

        printf("Enter name: ");
        scanf("%s", arr_students[i].name); // Read student name

        printf("Enter roll number: ");
        scanf("%d", &arr_students[i].roll_number); // Read roll number

        printf("Enter percentage: ");
        scanf("%f", &arr_students[i].percentage); // Read percentage
    }

    // Bubble sort implementation to arrange students in descending order of percentage
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) { // "- 1" to prevent unnecessary comparisons
            if (arr_students[j].percentage < arr_students[j + 1].percentage) {
                // Swap students if percentages are not in descending order
                struct students temp = arr_students[j];
                arr_students[j] = arr_students[j + 1];
                arr_students[j + 1] = temp;
            }
        }
    }

    // Print header for the output table
    printf("\nStudents arranged according to descending order of Percentage\n");
    printf("%-10s %-20s %-20s %-10s\n", "Sr. no.", "Name", "Roll No.", "Percentage");

    // Loop to print student information in a formatted table
    for (i = 0; i < 10; i++) {
        printf("%-10d %-20s %-20d %-10.2f \n", i + 1, arr_students[i].name,
               arr_students[i].roll_number, arr_students[i].percentage);
    }

    return 0;
}
*/

#include <stdio.h>

// Union for holding either years of experience or employee ID
union EmployeeInfo {
    int yearsExperience;  // Years of experience for an employee
    int employeeID;       // Employee ID for an employee
};

// Employee structure
struct Employee {
    char name[50];        // Name of the employee
    union EmployeeInfo details;  // Union to hold either years of experience or employee ID
};

int main() {
    struct Employee emp;  // Declare Employee struct

    // Get employee details
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.name);  // Read employee name

    int choice;
    printf("Choose information type:\n");
    printf("1. Years of Experience\n");
    printf("2. Employee ID\n");
    printf("Enter option: ");
    scanf("%d", &choice);  // Read user's choice

    switch (choice) {
        case 1:
            printf("Enter Years of Experience: ");
            scanf("%d", &emp.details.yearsExperience);  // Read years of experience

            // Display employee details
            printf("\nDisplaying information\n");
            printf("Employee Name: %s\n", emp.name);
            printf("Experience: %d years\n",emp.details.yearsExperience);
            break;
        case 2:
            printf("Enter Employee ID: ");
            scanf("%d", &emp.details.employeeID);  // Read employee ID
            // Display employee details
            printf("\nDisplaying information\n");
            printf("Employee Name: %s\n", emp.name);
            printf("Employee ID: %d\n", emp.details.employeeID);
            break;
        default:
            printf("Invalid choice.\n");  // Display if choice is invalid
    }

    return 0;
}


