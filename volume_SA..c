/*
Name: JUDITH JEPKURUI
Reg No: PA106/G/29231/25
Description: Program to find the volume and surface area of a cylinder
*/

#include <stdio.h>

int main(){
    double radius, height, volume , surface_area;
    const double PI = 3.141592653589793;

    //Prompt user for radius
    printf("Enter the radius of a cylinder:");
    scanf("%lf" ,&radius);

    //Prompt user for height
    printf("Enter the height of the cylinder:");
    scanf("%lf" , &height);

    //Calculate volume: V
    volume = PI * radius * height;

    //Calculate surface area
    surface_area = 2 * PI * radius * (height + radius);

    printf("volume of the cylinder: %2lf\n" , volume);
    printf("Surface area of the cylinder: %2lf\n", surface_area);

    return 0;
}
