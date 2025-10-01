/*
Name:Judith Jepkurui
Reg no: PA106/G/29231/25
Date:1st October 2025
Description:Program to display mobile data bundle purchase
*/
#include <stdio.h>
int main(){
    printf("Select data bundle: \n");
    printf("1\t 100MB\t@50 KES\n");
    printf("2\t 500MB\t@200 KES\n");
    printf("3\t 1GB\t@350 KES\n");
    printf("4\t 2GB\t@600 KES\n");

    int choice;
    printf("Select your choice: ");
    scanf("%d" , &choice);

    switch (choice){
case 1:
    printf("You selected 100 MB. Cost = 50 KES \n");
    break;
case 2:
    printf("You selected 500 MB. Cost = 200 KES \n");
    break;
case 3:
    printf("You selected 1 GB. Cost = 350 KES \n");
    break;
case 4:
    printf("You selected 2 GB. Cost = 600 KES \n");
    break;
default :
    printf("Invalid choice\n");
    }
    return 0;
}
