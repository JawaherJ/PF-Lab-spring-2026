#include<stdio.h>
int main(){
    float salary, bonus;
    int service;

    printf("Enter your salary : ");
    scanf("%f",&salary);
    printf("Enter your years of service : ");
    scanf("%d",&service);

    bonus= (service>10) ? (salary*0.30) : (service>5) ? (salary*0.20) : (salary*0.10);
    printf("Bonus amount : %.2f",bonus);

    return 0;
}