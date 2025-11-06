/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description:Program to display student's results
*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student info
struct Student {
    char name[50];
    int regNo;
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    char choice;

    // Step 1: Open file for writing (binary mode)
    fp = fopen("results.dat", "wb");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Step 2: Input and write student data
    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter registration number: ");
        scanf("%d", &s.regNo);
        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);
    printf("\nData successfully saved to results.dat!\n");

    // Step 3: Ask user if they want to display the file content
    printf("\nWould you like to view all student records now? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        fp = fopen("results.dat", "rb");
        if (fp == NULL) {
            printf("Error: Could not open results.dat for reading.\n");
            return 1;
        }

        printf("\nSTUDENT RESULTS\n");
        printf("----------------------------------------------\n");
        printf("Name\t\tReg No\t\tMarks\n");
        printf("----------------------------------------------\n");

        // Step 4: Read and display data
        while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
            printf("%-15s %-10d %.2f\n", s.name, s.regNo, s.totalMarks);
        }

        fclose(fp);
        printf("----------------------------------------------\n");
        printf("End of records.\n");
    }

    return 0;
}

