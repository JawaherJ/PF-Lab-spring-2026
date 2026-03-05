#include<stdio.h>
int main(){
    int days;
    int totaldistance=0;
    
    printf("enter no of days: ");
    scanf("%d",&days);

    for(int i=1;i<=days;i++){
        totaldistance=totaldistance+i;
    }
    printf("total distance covered in %d days = %d",days,totaldistance);
    return 0;
}