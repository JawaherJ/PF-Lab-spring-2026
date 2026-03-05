#include<stdio.h>
int main(){
    int code=2468;
    int usercode;

    do{
        printf("eneter the access code : ");
        scanf("%d",&usercode);
    }while(code=usercode);
    printf("access granted");
    return 0;
}