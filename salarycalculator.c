#include <stdio.h>

int main()
{
    double basic;
    double housing;
    double transport;
    double gross;
    double tax;
    double net;

    printf("===== EMPLOYEE SALARY CALCULATOR =====\n\n");

    printf("Enter basic salary: ");
    scanf("%lf", &basic);

    printf("Enter housing allowance: ");
    scanf("%lf", &housing);

    printf("Enter transport allowance: ");
    scanf("%lf", &transport);

    /* Calculations using operators */
    gross = basic + housing + transport;
    tax   = gross * 0.15;          /* 15% tax */
    net   = gross - tax;

    printf("\n---------- PAYSLIP ----------\n");
    printf("Basic Salary     : N$%.2f\n", basic);
    printf("Housing Allowance: N$%.2f\n", housing);
    printf("Transport Allowance: N$%.2f\n", transport);
    printf("Gross Salary     : N$%.2f\n", gross);
    printf("Tax (15%%)        : N$%.2f\n", tax);
    printf("Net Salary       : N$%.2f\n", net);

    /* Decision making */
    if (net >= 20000.0)
    {
        printf("\nIncome Category: HIGH INCOME\n");
    }
    else
    {
        printf("\nIncome Category: STANDARD INCOME\n");
    }

    return 0;
}