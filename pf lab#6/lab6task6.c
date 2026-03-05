#include<stdio.h>
int main(){
    float salary;

    printf("enter your salary : ");
    scanf("%f",&salary);

    for(int i =1;i<=10;i++){
        salary=salary * 1.05;
        printf("new salary : %f\n",salary);
    }
    return 0;
}