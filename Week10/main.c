#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main()
{
    int choice;

    do
    {
        printf("\n===== MFMS - WEEK 10 =====\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Save Data\n");
        printf("4. Load Data\n");
        printf("5. Generate Report\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            addEmployee();
        else if (choice == 2)
            listEmployees();
        else if (choice == 3)
            saveEmployees();
        else if (choice == 4)
            loadEmployees();
        else if (choice == 5)
            generateReport();
        else if (choice == 6)
            printf("Exiting system...\n");
        else
            printf("Invalid choice.\n");

    } while (choice != 6);

    return 0;
}