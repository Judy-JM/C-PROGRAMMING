/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description:1D_ARRAY
*/
#include <stdio.h>

int main(){
    float revenue[7];
    float totalrevenue = 0.0;
    float averagerevenue;

    for (int i = 0; i < 7; i++) {
        printf(" Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }
    for (int i = 0; i < 7; i++) {
        totalrevenue += revenue[i];
    }

    averagerevenue = totalrevenue / 7;

    printf(" Total weekly revenue: %.2f\n" , totalrevenue);
    printf(" Average daily revenue: %.2f\n" , averagerevenue);
    return 0;
}
