#include <stdio.h>
#include <string.h>

int main() {
    char supplierName[100];
    char email[100];
    char phone[10];
    char town[50];
    char backupName[100];
    char description[200];
    char searchName[100];
//  lab task1
    printf("=== ENTER SUPPLIER DETAILS ===\n");
    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    // Displaying details
    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name: %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town: %s\n", town);

    // Lab task2 
    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));

    // Lab task4
    strcpy(backupName, supplierName);
    printf("\n--- STRING COPY ---\n");
    printf("Original: %s\n", supplierName);
    printf("Backup Copy: %s\n", backupName);

    // Lab task5
    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);

    // Lab task3
    printf("\n--- SUPPLIER SEARCH ---\n");
    printf("Enter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    if (strcmp(supplierName, searchName) == 0) {
        printf("Supplier found.\n");
    } else {
        printf("Supplier not found.\n");
    }

    return 0;
}