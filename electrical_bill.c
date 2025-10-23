/*
Name: Judith Jepkurui
Reg no: PA106/G/29321/25
DESCRIPTION: Function to calculate elecrtical bill
*/
#include <stdio.h>

int calculateelectricbill (int units) {
int bill = 0;

if (units <= 100){
 bill = units * 10;
} else if (units <= 200) {
bill = 100 * 10;
bill += ( units - 100 ) * 15;
} else {
bill = 100 * 10;
bill += 100 * 15;
bill += (units - 200) * 20;
}
return bill;
}
int main (){
int units_consumed = 250;
int electrical_bill = calculateelectricbill(units_consumed);
printf("The total bill for %d units is Ksh. %d\n", units_consumed, electrical_bill);

return 0;
}




