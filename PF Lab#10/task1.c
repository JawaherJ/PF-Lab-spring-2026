#include<stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char name[50];
    int i;
    printf("enter a name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    
    int length =strlen(name);
    if(length>20 || length<3){
        printf("invalid name\n");
    }else if(name[0]== ' ' || name[length-1]==' '){
         printf("invalid name\n");
    }else{
        for( i=0;i<length;i++){
            if(isdigit(name[i])){
                printf("invalid name\n");
                break;
            }
        }  printf("valid name\n");
    }
    printf("length of string: %d",length);
    

    return 0;
}