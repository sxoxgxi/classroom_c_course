#include <stdio.h>

struct Employee {
    char empName[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[5];
    printf("Enter details for 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].empName);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    FILE *file = fopen("employee.txt", "w");
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%s %d %.2f\n", employees[i].empName, employees[i].age, employees[i].salary);
    }
    fclose(file);

    printf("\nEmployee Records:\n");
    file = fopen("employee.txt", "r");
    for (int i = 0; i < 5; i++) {
        fscanf(file, "%s %d %f", employees[i].empName, &employees[i].age, &employees[i].salary);
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].empName);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    fclose(file);
    return 0;
}
