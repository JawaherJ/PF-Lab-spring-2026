#include<stdio.h>
int main(){
 
    int dailycunsmp;
    int days=0;
    int total=0;

    printf("enter your daily power consumption\n");
    scanf("%d",&dailycunsmp);

    while(dailycunsmp!= -999){
        total=total+dailycunsmp;
        days++;
        printf("enter your daily power consumption again\n");
        scanf("%d",&dailycunsmp);
        
    }
    printf("number of days : %d\n",days);
    printf("total units consumed : %d\n",total);
    printf("average consumption : %.2f \n",(float)total/days);
    return 0;
}