#include <stdio.h>
#include "employees.h"

void addEmployee(void)
{
    int id;
    char name[50];
    double salary;
    FILE *fp;

    printf("\n--- Add Employee ---\n");
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%49s", name);
    printf("Enter Salary: ");
    scanf("%lf", &salary);

    fp = fopen("employees.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%d %s %.2f\n", id, name, salary);
    fclose(fp);

    printf("Employee saved successfully.\n");
}

void listEmployees(void)
{
    int id;
    char name[50];
    double salary;
    FILE *fp;

    fp = fopen("employees.txt", "r");
    if (fp == NULL)
    {
        printf("No employee records found.\n");
        return;
    }

    printf("\n----- Employee List -----\n");
    while (fscanf(fp, "%d %49s %lf", &id, name, &salary) == 3)
    {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n", id, name, salary);
    }

    fclose(fp);
}

void saveEmployees(void)
{
    printf("Employees are automatically saved when added.\n");
}

void loadEmployees(void)
{
    listEmployees();
}