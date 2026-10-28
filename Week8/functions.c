#include <stdio.h>

/* Function declarations */
void displayWelcome();
void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void searchEmployee();

int main()
{
    int choice;
    float basic, housing, transport, gross;
    float revenue, expenses, balance;
    float amount, vat;

    displayWelcome();

    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            vat = calculateVAT(amount);
            printf("VAT (15%%): N$%.2f\n", vat);
        }
        else if (choice == 2)
        {
            printf("\nEnter basic salary: ");
            scanf("%f", &basic);
            printf("Enter housing allowance: ");
            scanf("%f", &housing);
            printf("Enter transport allowance: ");
            scanf("%f", &transport);

            gross = calculateSalary(basic, housing, transport);
            printf("Gross Salary: N$%.2f\n", gross);
        }
        else if (choice == 3)
        {
            printf("\nEnter revenue: ");
            scanf("%f", &revenue);
            printf("Enter expenses: ");
            scanf("%f", &expenses);

            balance = calculateBudget(revenue, expenses);

            printf("Balance: N$%.2f\n", balance);

            if (balance > 0)
                printf("Status: SURPLUS\n");
            else if (balance < 0)
                printf("Status: DEFICIT\n");
            else
                printf("Status: BALANCED\n");
        }
        else if (choice == 4)
        {
            searchEmployee();
        }
        else if (choice == 5)
        {
            printf("\nThank you for using the system.\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

/* ===== Function Definitions ===== */

void displayWelcome()
{
    printf("====================================\n");
    printf("  MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("====================================\n");
}

void displayMenu()
{
    printf("\n---------- MENU ----------\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
}

float calculateVAT(float amount)
{
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

void searchEmployee()
{
    int employeeIDs[5] = {101, 102, 103, 104, 105};
    int searchID;
    int found = 0;
    int i;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++)
    {
        if (employeeIDs[i] == searchID)
        {
            printf("Employee found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Employee not found.\n");
    }
}