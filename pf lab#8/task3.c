#include <stdio.h>

int main() {

    int temp[7][3] = {
        {22, 31, 18},
        {20, 35, 17},
        {25, 33, 21},
        {19, 29, 16},
        {23, 36, 20},
        {21, 34, 19},
        {24, 30, 22}
    };

    int i, j, highest, sum;
    float avg;

    // question 1
    highest = temp[0][0];
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 3; j++) {
            if(temp[i][j] > highest) {
                highest = temp[i][j];
            }
        }
    }
    printf("Highest temperature in the week = %d\n\n", highest);

    // question 2
    printf("Daily Averages:\n");
    for(i = 0; i < 7; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum = sum + temp[i][j];
        }
        avg = (float)sum / 3;
        printf("Day %d = %.2f\n", i+1, avg);
    }

    return 0;
}
