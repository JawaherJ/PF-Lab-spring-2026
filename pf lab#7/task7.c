#include<stdio.h>
int main(){
    int arr[10];
    int i;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[j]==arr[i]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0;i<10;i++){
    printf("%d  ",arr[i]);}
    return 0;
}