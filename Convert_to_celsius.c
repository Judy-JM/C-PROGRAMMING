/*
Name: Judith Jepkurui
Reg no: PA106/G/29231/25
DESCRIPTION:function to convert to celsius
*/
#include <stdio.h>
double convert_to_celsius (double fahrenheit){
return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(){
    double fahrenheit_temp;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf" , & fahrenheit_temp);
    double celsius_temp = convert_to_celsius(fahrenheit_temp);
    printf("The temperature in Celcius is % .2f\n ", celsius_temp);

    return 0;
}
