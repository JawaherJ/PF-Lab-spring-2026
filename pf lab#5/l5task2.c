#include<stdio.h>
int main(){
    int units, customerType;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100){
        bill = units * 10;
    } else if(units > 100 && units <= 300){
        printf("Enter customer type (1 for Domestic, 2 for Commercial): ");
        scanf("%d", &customerType);

        if(customerType == 1){
            bill = units * 12;
        } else if(customerType == 2){
            bill = units * 15;
        } else {
            printf("Invalid customer type\n");
            return 0;
        }
    } else {
        bill = units * 20;
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}