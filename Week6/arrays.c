#include <stdio.h>

int main()
{
    float salaries[10];
    float budgets[5];
    int i;
    float totalSalaries = 0;
    float totalBudgets = 0;
    float highest, lowest;
    float averageSalary, averageBudget;

    printf("===== MUNICIPAL INFORMATION MANAGEMENT SYSTEM =====\n\n");

    /* ===== A. Employee Salaries ===== */
    printf("--- Enter 10 Employee Salaries ---\n");
    for (i = 0; i < 10; i++)
    {
        printf("Salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalaries = totalSalaries + salaries[i];
    }

    highest = salaries[0];
    lowest = salaries[0];

    for (i = 1; i < 10; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }
        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    averageSalary = totalSalaries / 10;

    printf("\n----- Salary Results -----\n");
    printf("Total Salaries   : N$%.2f\n", totalSalaries);
    printf("Average Salary   : N$%.2f\n", averageSalary);
    printf("Highest Salary   : N$%.2f\n", highest);
    printf("Lowest Salary    : N$%.2f\n", lowest);

    /* ===== B. Department Budgets ===== */
    printf("\n--- Enter 5 Department Budgets ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudgets = totalBudgets + budgets[i];
    }

    averageBudget = totalBudgets / 5;

    printf("\n----- Budget Results -----\n");
    printf("Total Budget     : N$%.2f\n", totalBudgets);
    printf("Average Budget   : N$%.2f\n", averageBudget);

    /* Display all budgets */
    printf("\nAll Department Budgets:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Department %d: N$%.2f\n", i + 1, budgets[i]);
    }

    return 0;
}