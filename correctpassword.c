/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description:Program to display log in using password
*/
#include <stdio.h>
#include <string.h>

int main(){
    char password[5];
    char correctpassword[] = "1234";

    do {
        printf("Enter the password: ");
        scanf("%s" , password);
    }while (strcmp(password, correctpassword) != 0);

    printf("Access Granted.\n");

    return 0;
}
