#include <stdio.h>

int main() {
  int arr[10];
  int num,count=0;
      printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);  }
       printf("Enter a number to search: ");
       scanf("%d",&num);
       for(int i=0;i<10;i++){
           if(arr[i]==num){
             count++;
           }
       }
       if(count==0){
           printf("number not found");
       }else{
           printf("%d appears %d times\n",num,count);
       }
    
  
    return 0;
}

