/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description:Program to display student's results
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int reg_no;
    int total_marks;
} Student;

int main() {
    FILE *file;
    Student student;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Student Records:\n");
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %s, Marks: %d\n", student.name, student.total_marks);
    }

    fclose(file);
    return 0;
}
