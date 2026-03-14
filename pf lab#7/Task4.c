#include<stdio.h>
int main(){
    char c[20];
    
    printf("Enter 20 character mixed case word: ");
    scanf("%[^\n]",c);
    
    for(int i=0;i<20;i++){
        if(c[i]>='A'&& c[i]<='Z'){
            c[i]=c[i]+32;
        }else if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-32;
        }
    }
    printf("%s\n",c);
    return 0;
}