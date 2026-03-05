#include<stdio.h>
int main(){
    int n;
    int total=0;

    printf("Price per ticket is 100$\nPlease select number of tickets you want to buy!\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        total=total+i*100;
    }
    printf("total price : $%d\n",total);
    return 0;
}