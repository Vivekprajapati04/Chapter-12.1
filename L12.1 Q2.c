#include <stdio.h>

#define MAX_EMPLOYEES 100


struct Employee {
    int employeeID;
    char name[50];
    int age;
    float salary;
};

int main() {
    int numEmployees;

    
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    
    if (numEmployees > MAX_EMPLOYEES) {
        printf("Number of employees exceeds the maximum limit.\n");
        return 1; 
    }

    
    struct Employee employees[MAX_EMPLOYEES];

    
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }

    
    printf("Employee Records:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
