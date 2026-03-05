#include<stdio.h>
int main(){
   int total=50;
   int parked=0;
   int input;

   while(parked<total){
    printf("Enter 1 to park a car, and 0 to stop: ");
    scanf("%d",&input);

    if(input==0){
        printf("operator stopped the system\n");
        break;
    }else if(input==1){
        parked++;
        printf("car parked!\n");
        printf("remaining spaces: %d\n\n",total-parked);
        if(parked==total){
            printf("parking lot is now full!\n");
        }
    }else{
        printf("ivalid input!\n");
    }
   }
   printf("total spaces: %d\n",total);
    printf("cars parked: %d\n",parked);
     printf("spaces left: %d\n",total-parked);

    return 0;
}