#include <stdio.h>

int main() {

    int marks[4][3] = {
        {80, 75, 90},
        {60, 70, 85},
        {88, 92, 79},
        {55, 65, 70}
    };

    int i, j, total, sum;
    float avg;

    printf("Student Totals:\n");
    for(i = 0; i < 4; i++) {
        total = 0;
        for(j = 0; j < 3; j++) {
            total = total + marks[i][j];
        }
        printf("Student %d = %d\n", i+1, total);
    }

    printf("\nSubject Averages:\n");
    for(j = 0; j < 3; j++) {
        sum = 0;
        for(i = 0; i < 4; i++) {
            sum = sum + marks[i][j];
        }
        avg = (float)sum / 4;
        printf("Subject %d = %.2f\n", j+1, avg);
    }

    return 0;
}