#include <stdio.h>

int main()
{
    double revenue;
    double expenses;
    double balance;

    printf("====================================\n");
    printf("    MUNICIPAL BUDGET CALCULATOR\n");
    printf("====================================\n\n");

    printf("Enter Total Revenue (N$): ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses (N$): ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n---------- SUMMARY ----------\n");
    printf("Revenue  : N$%.2f\n", revenue);
    printf("Expenses : N$%.2f\n", expenses);
    printf("Balance  : N$%.2f\n", balance);

    return 0;
}