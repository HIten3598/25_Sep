#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void inputEmployeeInfo(struct Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter Employee Number for employee %d: ", i + 1);
        scanf("%d", &employees[i].empno);
        printf("Enter Employee Name for employee %d: ", i + 1);
        scanf(" %[^\n]s", employees[i].empname); // %[^\n]s is used to read the input with spaces
        printf("Enter Address for employee %d: ", i + 1);
        scanf(" %[^\n]s", employees[i].address); // %[^\n]s is used to read the input with spaces
        printf("Enter Age for employee %d: ", i + 1);
        scanf("%d", &employees[i].age);
    }
}

void displayEmployeeInfo(struct Employee employees[], int size) {
    printf("\nEmployee Information:\n");
    for (int i = 0; i < size; i++) {
        printf("Employee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("--------------------\n");
    }
}

int main() {
    struct Employee employees[5]; // Array of structures for five employees

    // Input employee details
    inputEmployeeInfo(employees, 5);

    // Display employee details
    displayEmployeeInfo(employees, 5);

    return 0;
}
