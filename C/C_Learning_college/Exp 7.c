//16010123217 Om Thanage

/*#include <stdio.h>
#include <string.h>


// Employee structure
struct Employee {
    int empID;
    char name[50];
    char department[50];
    float salary;
};

// Union for holding EmployeeInfo
union EmployeeInfo {
    char name[50];
    char department[50];
    float salary;
};


int main() {
    struct Employee employees[100];
    int numEmployees = 0;
    int choice;
    int empID;

    do {
        printf("\nWelcome to Employee Database Management\n");
        printf("1. Add Employee\n");
        printf("2. Print Employee Details\n");
        printf("3. Update Employee Information\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &numEmployees);
                break;
            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &empID);
                printEmployeeDetails(employees, numEmployees, empID);
                break;
            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &empID);
                updateEmployeeInfo(employees, numEmployees, empID);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to add a new employee
void addEmployee(struct Employee employees[], int *numEmployees) {
    if (*numEmployees < 100) {
        printf("\nEnter Employee Details:\n");
        printf("Employee ID: ");
        scanf("%d", &employees[*numEmployees].empID);
        printf("Name: ");
        scanf(" %[^\n]s", employees[*numEmployees].name);
        printf("Department: ");
        scanf(" %[^\n]s", employees[*numEmployees].department);
        printf("Salary: ");
        scanf("%f", &employees[*numEmployees].salary);

        (*numEmployees)++;
        printf("Employee added successfully.\n");
    } else {
        printf("Maximum number of employees reached.\n");
    }
}

// Function to print details of an employee
void printEmployeeDetails(struct Employee employees[], int numEmployees, int empID) {
    int i;
    for (i = 0; i < numEmployees; i++) {
        if (employees[i].empID == empID) {
            printf("\nEmployee Details:\n");
            printf("Employee ID: %d\n", employees[i].empID);
            printf("Name: %s\n", employees[i].name);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", empID);
}

// Function to update information of an employee
void updateEmployeeInfo(struct Employee employees[], int numEmployees, int empID) {
    int i;
    int choice;
    union EmployeeInfo info;
    int employeeFound = 0;

    for (i = 0; i < numEmployees; i++) {
        if (employees[i].empID == empID) {
            employeeFound = 1;
            printf("\nUpdate Employee Information:\n");
            printf("1. Update Name\n");
            printf("2. Update Department\n");
            printf("3. Update Salary\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Enter new Name: ");
                    scanf(" %[^\n]s", info.name);
                    strcpy(employees[i].name, info.name);
                    printf("Name updated successfully.\n");
                    break;
                case 2:
                    printf("Enter new Department: ");
                    scanf(" %[^\n]s", info.department);
                    strcpy(employees[i].department, info.department);
                    printf("Department updated successfully.\n");
                    break;
                case 3:
                    printf("Enter new Salary: ");
                    scanf("%f", &info.salary);
                    employees[i].salary = info.salary;
                    printf("Salary updated successfully.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;  // Exit loop once employee is found and updated
        }
    }

    if (!employeeFound) {
        printf("Employee with ID %d not found.\n", empID);
    }
}
*/

























































































/*
Write a program to manage an employee database using structure and union in C. Each Employee has the following information:
1.	Employee ID(integer)
2.	Name(string)
3.	Department(string)
4.	Salary(float)
*/
/*#include <stdio.h>
#include <string.h>

struct database {
    long int id;
    char name[50];
    char Department[50];
    float Salary;
}arr_database[100];

int add_employees(int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%ld", &arr_database[i].id);

        printf("Enter name: ");
        scanf("%s", arr_database[i].name);

        printf("Enter Department: ");
        scanf("%s", arr_database[i].Department);

        printf("Enter Salary: ");
        scanf("%f", &arr_database[i].Salary);
    }
}

int printEmployeeDetails(int n) {
    printf("\nDisplaying Information:\n");
    printf("%-10s %-20s %-20s %-20s %-20s\n", "Sr. No", "ID", "Name", "Department", "Salary");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20ld %-20s %-20s %-20.2f\n", i+1, arr_database[i].id, arr_database[i].name, arr_database[i].Department, arr_database[i].Salary);
    }
}

int updateEmployeeInfo(int j, int n) {
  for (int i = 0; i < n; i++) {
    if (arr_database[i].id == j) {
      int internal_choice;
      printf("What do you want to update?\nEnter 1 for updating Name\nEnter 2 for updating Department\nEnter 3 for updating Salary\n");
      scanf("%d", &internal_choice);

      switch (internal_choice) {
        case 1:
          printf("Enter the updated value: ");
          scanf("%s", &arr_database[i].name);
          break;

        case 2:
          printf("Enter the updated value: ");
          scanf("%s", &arr_database[i].Department);
          break;

        case 3:
          printf("Enter the updated value: ");
          scanf("%f", &arr_database[i].Salary);
          break;

        default:
          printf("Invalid choice!\n");
      }
      printEmployeeDetails(n);
      return 0;
    }
  }

  printf("Employee with ID %d not found.\n", j);
  return 0;
}



int main() {
    int n,choice;
    printf("Enter the number of employees: ");
    scanf("%d", &n);


    add_employees(n);
    printEmployeeDetails(n);

    printf("Do you want to update?(Y/N)\n");
    scanf("%s",&choice);

    if(choice == "Y" || "y" || "yes"){
        int update_id;
        printf("Enter the Id you want to update: ");
        scanf("%d",&update_id);
        updateEmployeeInfo(update_id,n);
    }
    else{
        return 0;
    }


    return 0;
}

*/


/*
#include <stdio.h>
#include <string.h>

// Union for holding either employee name or department
union EmployeeInfo {
    char name[50];
    char department[50];
};

// Employee structure
struct Employee {
    int id;
    union EmployeeInfo info;
};

// Function to add employee details
void addEmployee(struct Employee emp_list[], int *num_employees) {
    printf("\nEnter details for employee %d:\n", *num_employees + 1);

    printf("Employee ID: ");
    scanf("%d", &emp_list[*num_employees].id);

    int choice;
    printf("Choose information type:\n");
    printf("1. Name\n");
    printf("2. Department\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Employee Name: ");
            scanf(" %[^\n]s", emp_list[*num_employees].info.name);
            break;
        case 2:
            printf("Enter Employee Department: ");
            scanf(" %[^\n]s", emp_list[*num_employees].info.department);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    (*num_employees)++; // Increment employee count after successful addition
}

// Function to print employee details by ID
void printEmployeeDetails(struct Employee emp_list[], int num_employees, int id) {
    int found = 0;
    for (int i = 0; i < num_employees; i++) {
        if (emp_list[i].id == id) {
            printf("\nEmployee Details (ID: %d):\n", id);
            printf("Name: %s\n", emp_list[i].info.name);
            printf("Department: %s\n", emp_list[i].info.department);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}

// Function to update employee information by ID
void updateEmployeeInfo(struct Employee emp_list[], int num_employees, int id) {
    int found = 0;
    for (int i = 0; i < num_employees; i++) {
        if (emp_list[i].id == id) {
            int choice;
            printf("\nEmployee with ID %d found.\n", id);
            printf("Choose information to update:\n");
            printf("1. Name\n");
            printf("2. Department\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Enter New Employee Name: ");
                    scanf(" %[^\n]s", emp_list[i].info.name);
                    break;
                case 2:
                    printf("Enter New Employee Department: ");
                    scanf(" %[^\n]s", emp_list[i].info.name); // typo corrected, should be emp_list[i].info.department
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}

int main() {
    int num_employees = 0;
    struct Employee emp_list[100]; // Array to store information for 100 employees

    int choice;
    do {
        printf("\nEmployee Management System\n");
        printf("1. Add New Employee\n");
        printf("2. Print Employee Details\n");
        printf("3. Update Employee Information\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(emp_list, &num_employees);
                break;
            case 2:
                if (num_employees == 0) {
                    printf("No employees added yet.\n");
                } else {
                    int id;

                }
        }
    }
    while{choice != 4};

    return 0;
}*/
