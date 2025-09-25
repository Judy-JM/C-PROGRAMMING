/*
Name:JUDITH JEPKURUI
Reg No:PA106/G/29231/25
Description: Program to display user's details
*/

#include <stdio.h> //scanf(), printf()
//main function
int main(){
    //variable declaration

    int id_number ; //%d
    float height ; //%f
    double bankbalance ; //%lf

    //prompting the user to enter each variable

    printf("\n Enter id_number:  ");
    scanf("%5d", &id_number);

    printf("\n Enter height: " );
    scanf("%f" ,&height);

    printf("\n Enter bankbalance:" );
    scanf("%lf" ,&bankbalance);

    printf("The id_number is %d \n", id_number);
    printf("The height is %.2f \n", height);
    printf("The bankbalance is Ksh%.3lf \n", bankbalance);

    return 0;
}
