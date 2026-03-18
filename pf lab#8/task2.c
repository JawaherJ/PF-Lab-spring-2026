#include <stdio.h>

int main() {

    int seats[5][6] = {
        {1, 0, 1, 1, 0, 1},
        {0, 0, 0, 1, 1, 0},
        {1, 1, 1, 1, 1, 0},
        {0, 1, 0, 0, 1, 0},
        {1, 1, 0, 1, 0, 1}
    };

    int i, j, available, booked, maxBooked, maxRow;

    // question 1
    available = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 6; j++) {
            if(seats[i][j] == 0) {
                available = available + 1;
            }
        }
    }
    printf("Available seats = %d\n", available);

    // question 2
    maxBooked = 0;
    maxRow = 0;
    for(i = 0; i < 5; i++) {
        booked = 0;
        for(j = 0; j < 6; j++) {
            if(seats[i][j] == 1) {
                booked = booked + 1;
            }
        }
        if(booked > maxBooked) {
            maxBooked = booked;
            maxRow = i + 1;
        }
    }
    printf("Row with most bookings = Row %d (%d booked)\n", maxRow, maxBooked);

    return 0;
}
