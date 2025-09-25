/*
Name:JUDITH JEPKURUI
Reg No:PA106/G/29231/25
Description:Program to find compound interest
*/

#include <stdio.h>
#include <math.h>
int main (){
double principal, rate, time, n, amount;
    // Input principal, rate, time, and number of times of interest applied per year
    printf("Enter principal amount (P):");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (r) in decimal");
    scanf("%lf" , &rate);

    printf("Enter time in years (t):");
    scanf("%lf" , &time);

    printf("Enter number of times interest applied per year (n):");
    scanf("%lf" , &n);

    //Compound interest
    amount = principal * pow(1 + rate/n, n*time);

    printf("Compound Interest Amount (A): %.2lf\n",amount);

    return 0;
}
