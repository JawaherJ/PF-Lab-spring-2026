#include<stdio.h>
int main(){
    int availabledata=100;
    int dataused;

    printf("Enter your total available data in MB:");
    scanf("%d",&availabledata);

    while(availabledata>0){
        printf("enter your data used (in MB) : ");
        scanf("%d",&dataused);
        availabledata=availabledata - dataused;
        
        if(availabledata<=0){
            printf("data finished");}
        }
        return 0;
    }