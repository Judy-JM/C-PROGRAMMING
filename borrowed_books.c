/*
Name:Judith jepkurui
Reg no: PA106/G/29231/25
Description:BORROWED_BOOKS.txt.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char title[100];
    FILE *file_pointer;

    file_pointer = fopen("borrowed_books.txt", "a");
    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the book: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file_pointer, "%s", title);

    fclose(file_pointer);

    printf("Title successfully stored in borrowed_books.txt.\n");

    return 0;
}
