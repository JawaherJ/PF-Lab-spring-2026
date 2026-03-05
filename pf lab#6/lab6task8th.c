#include<stdio.h>
int main(){
    int pin;

      printf("Enter verification pin : ");
        scanf("%d",&pin);

    while(pin!=555){
         printf("Incorrect pin! try again. \n");
          printf("Enter pin again : ");
        scanf("%d",&pin);
    }
    printf("Acess granted\n");
    return 0;
}