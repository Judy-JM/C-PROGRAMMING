/*
Name:JUDITH JEPKURUI
Reg No:PA106/G/29231/25
Description:Program to display Loan Verification
*/

#include <stdio.h>
int main(){
    int age;
    double annual_income;

    //Prompt user for age
    printf("Enter your age:");
    scanf("%d", &age);

    //Prompt user for annual income
    printf("Enter your annual income:");
    scanf("%lf", &annual_income);

    //check eligibiity
    if (age>= 21 && annual_income >= 21000)
    {
        printf("Congratulations! You qualify for a loan.\n");
    }
    else
    {
    printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    return 0;
}
