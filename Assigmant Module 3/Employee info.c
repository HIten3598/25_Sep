#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void inputEmployeeInfo(struct Employee *emp) {
    printf("Enter Employee Number: ");
    scanf("%d", &emp->empno);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp->empname); // %[^\n]s is used to read the input with spaces
    printf("Enter Address: ");
    scanf(" %[^\n]s", emp->address); // %[^\n]s is used to read the input with spaces
    printf("Enter Age: ");
    scanf("%d", &emp->age);
}

void displayEmployeeInfo(struct Employee emp) {
    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    // Input employee details
    inputEmployeeInfo(&emp);

    // Display employee details
    displayEmployeeInfo(emp);

    return 0;
}
