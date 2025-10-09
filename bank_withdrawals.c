/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description:Program to display bank ATM withdrawals
*/
#include <stdio.h>

int main(){
    int balance = 10000;
    int withdrawalamount;
    printf("Your current balance is: %d\n", balance);

    while (balance > 0) {
        printf("Enter the amount you want you want to withdraw:");
        scanf("%d", & withdrawalamount);
        balance -= withdrawalamount;
        printf("New balance: %d\n", balance);
    }
    printf("Insufficient funds.No more withdrawals allowed.\n");
    return 0;
}
