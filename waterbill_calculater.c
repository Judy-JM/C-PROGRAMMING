/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Date:1st October 2025
Description:Program to display water bill
20 KES charged per unit
*/
#include <stdio.h>
int main(){
    int units_consumed;
    float totalbill;

    printf("Enter the number of water units_consumed: \t");
    scanf("%d", &units_consumed);

    if(units_consumed >=0 && units_consumed <=30){
        totalbill = units_consumed * 20;
    }
    else if(units_consumed >=31 && units_consumed <=60){
        totalbill = units_consumed * 25;
    }
    else if(units_consumed >60){
        totalbill = (30*20)+(30*25)+((units_consumed-60)*30);
    }
    printf("The total water bill is: %.2f KES \n" , totalbill);

    return 0;
}
