/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Date:1st October 2025
Description:Program to check student's eligibility for final exams
*/
#include <stdio.h>

int main(){
    float attendance_percentage;
    float average_marks;

    printf("Enter your attendance_percentage: \n");
    scanf("%f" , &attendance_percentage);
    printf("Enter your average_marks: \n");
    scanf("%f" , &average_marks);

    if (attendance_percentage >=75 && average_marks >=40){
        printf("Eligible for final exams.");
    }
    else{
        printf(" Not eligible for final exams.");
    }
    return 0;
}
