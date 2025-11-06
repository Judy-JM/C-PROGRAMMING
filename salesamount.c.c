/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;
    int n, i;
    char choice;

    // Step 1: Open file for writing (text mode)
    fp = fopen("sales.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create sales.txt\n");
        return 1;
    }

    printf("Enter number of transactions: ");
    scanf("%d", &n);

    // Step 2: Enter each transaction and write to file
    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(fp, "%.2f\n", amount);
    }

    fclose(fp);
    printf("\nData successfully saved to sales.txt!\n");

    // Step 3: Ask if user wants to view total
    printf("\nWould you like to calculate and view total sales? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        fp = fopen("sales.txt", "r");
        if (fp == NULL) {
            printf("Error: Could not open sales.txt for reading.\n");
            return 1;
        }

        // Step 4: Read all amounts and calculate total
        total = 0.0;
        while (fscanf(fp, "%f", &amount) == 1) {
            total += amount;
        }

        fclose(fp);

        // Step 5: Display the total
        printf("\n-----------------------------\n");
        printf("Total sales for the day: %.2f\n", total);
        printf("-----------------------------\n");
    }

    return 0;
}
