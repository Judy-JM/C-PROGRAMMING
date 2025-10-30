/*
Name:Judith jepkurui
Reg no:PA106/G/29231/25
Description:3D_ARRAY
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main () {
int chain [BRANCHES][FLOORS][ROOMS];
int occupied_rooms = 0;

srand(time(NULL));

for (int i = 0; i < BRANCHES; i++) {
    for (int j = 0; j < FLOORS; j++) {
        for (int k = 0; k < ROOMS; k++){
            chain[i][j][k] = rand() % 2;
            if (chain[i][j][k] == 1) {
                occupied_rooms++;
            }
        }
    }
}

    printf("Total number of occupied rooms across all branches: %d\n", occupied_rooms);

    return 0;
}
