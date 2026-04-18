#include <stdio.h>

float toMegajoules(float kwh) {
    return kwh * 3.6;
}

float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845;
}

int main() {
    float kwh;
    printf("Enter energy reading in kWh: ");
    scanf("%f", &kwh);

    float btu = toBTU(kwh);
    float cal = toCalories(kwh);

    printf("\n===== CONVERSION REPORT =====\n");
    printf("kWh Input  : %.2f kWh\n", kwh);
    printf("Megajoules : %.2f MJ\n", toMegajoules(kwh));
    printf("BTU        : %.2f BTU\n", btu);
    printf("Calories   : %.2f kcal\n", cal);
    printf("=============================\n");

    return 0;
}