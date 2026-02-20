#include<stdio.h>
int main(){
    int type,parkingtype,hours;
    float totalfee;

    printf("select your vehicle type : ");
    printf("select 1 if car, 2 if bike, 3 if bus.\n");
    scanf("%d",&type);

    switch(type){
        case 1 :
        printf("Select parking type : \n 1 if regular parking(Rs.50 per hr) and 2 if VIP parking(Rs.100 per hr) \n");
        scanf("%d",&parkingtype);
        printf("Enter hours parked : ");
        scanf("%d",&hours);
        switch(parkingtype){
            case 1:
            totalfee=hours*50; break;
            case 2:
            totalfee=hours*100; break;
            default :
            printf("invalide parking type\n");
            return 0;
        }
        break;
        case 2:
        printf("select your parking type : \n 1 if regular(Rs.20 per hr) and 2 if premium(Rs.40 per hr)");
        scanf("%d",&parkingtype);
        printf("enter hours parked : ");
        scanf("%d",&hours);
        switch(parkingtype){
            case 1:
            totalfee=hours*20; break;
            case 2 : 
            totalfee=hours * 40; break;
            default : 
            printf("invalid parking type.\n");
            return 0;
        }
        break;

        case 3 : 
        printf("fixed rate for bus(Rs.200 per hr)");
        printf("enter hours parked : \n");
        scanf("%d",&hours);
        totalfee=hours*200; break;

        default : 
        printf("invalid vehivle type.\n");
        return 0;
    }
    printf("your total parking fee is Rs. %.2f\n",totalfee);
    return 0;
}