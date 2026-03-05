#include<stdio.h>
int main(){
    int status;
    int total=0;

    for(int i=1;i<=25;i++){
        printf("member %d : enter status (1 if checked in, 0 if absent) \n",i);
        scanf("%d",&status);

        if(status==1){
            total++;
        }
    }
    printf("\n total members checked in : %d",total);
    return 0;
}