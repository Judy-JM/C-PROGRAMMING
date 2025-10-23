/*
Name:Judith Jepkurui
Reg no: PA106/G/29231/25
DESCRIPTION: PROGRAM TO CALCULATE FARE
*/
#include <stdio.h>
int calculatefare ( int distance) {
int totalfare = distance * 50;
return totalfare;
}

int main() {
int distancetravelled = 10;
int amount = calculatefare(distancetravelled);
printf(" The total fare for %d km is Ksh. %d\n", distancetravelled, amount);
return 0;
}
