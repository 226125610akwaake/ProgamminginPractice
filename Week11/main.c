#include <stdio.h>
#include <string.h>
#include "records.h"

int main()
{
    Employee employees[MAX_RECORDS];
    int employeeCount = 0;
    int choice;
    int i;

    do
    {
        printf("\n===== MFMS - WEEK 11 (Structures) =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (employeeCount >= MAX_RECORDS)
            {
                printf("Array is full!\n");
            }
            else
            {
                printf("\nEnter Employee ID: ");
                scanf("%d", &employees[employeeCount].id);

                printf("Enter Name: ");
                scanf("%29s", employees[employeeCount].name);

                printf("Enter Department: ");
                scanf("%19s", employees[employeeCount].department);

                printf("Enter Salary: ");
                scanf("%lf", &employees[employeeCount].salary);

                employeeCount++;
                printf("Employee added successfully.\n");
            }
        }
        else if (choice == 2)
        {
            if (employeeCount == 0)
            {
                printf("No employees stored.\n");
            }
            else
            {
                printf("\n----- Employee List -----\n");
                for (i = 0; i < employeeCount; i++)
                {
                    printf("ID: %d | Name: %s | Dept: %s | Salary: N$%.2f\n",
                           employees[i].id,
                           employees[i].name,
                           employees[i].department,
                           employees[i].salary);
                }
            }
        }
        else if (choice == 3)
        {
            printf("Exiting...\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}