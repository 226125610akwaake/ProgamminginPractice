#include <stdio.h>

int main()
{
    int i;
    int numberOfEmployees;
    double salary;
    double total = 0;
    double highest;
    double lowest;
    double average;

    printf("===== MUNICIPAL EMPLOYEE SALARY ANALYSIS =====\n\n");

    printf("How many employees? ");
    scanf("%d", &numberOfEmployees);

    printf("\nEnter salary for employee 1: ");
    scanf("%lf", &salary);

    total = salary;
    highest = salary;
    lowest = salary;

    /* for loop to process the rest of the employees */
    for (i = 2; i <= numberOfEmployees; i++)
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%lf", &salary);

        total = total + salary;

        if (salary > highest)
        {
            highest = salary;
        }

        if (salary < lowest)
        {
            lowest = salary;
        }
    }

    average = total / numberOfEmployees;

    printf("\n---------- RESULTS ----------\n");
    printf("Total Salary Expenditure : N$%.2f\n", total);
    printf("Average Salary           : N$%.2f\n", average);
    printf("Highest Salary           : N$%.2f\n", highest);
    printf("Lowest Salary            : N$%.2f\n", lowest);

    return 0;
}