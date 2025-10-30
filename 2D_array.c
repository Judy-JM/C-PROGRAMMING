/*
Name: Judith jepkurui
Reg no:PA106/G/29231/25
Description:2d_array
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int occupancy[5][10];
    int floors = 5;
    int rooms_per_floor = 10;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < floors; i++) {
        for ( j= 0; j < rooms_per_floor; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }
    printf("Room Occupancy Report:\n");
    for ( i = 0; i < floors; i++) {
        int occupied_count = 0;
        int vacant_count = 0;
        for ( j=0; j < rooms_per_floor; j++) {
            if (occupancy[i][j] == 1){
            occupied_count++;

        } else {
        vacant_count++;
        }
    }
    printf(" Floor %d: Occupied rooms = %d, Vacant rooms = %d\n", i + 1, occupied_count, vacant_count);
}
    return 0;
}
