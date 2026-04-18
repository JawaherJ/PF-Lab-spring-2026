#include <stdio.h>
#include <string.h>

    int main(){
        char originalPassword[30]="fast1234";
        char userPassword[30];
        int count;
        
        while(count!=3){
                  printf("enter password : ");
        scanf("%s",userPassword);
        if(strlen(userPassword)==0){
            printf("empty");
        }
        if(strcmp(userPassword,originalPassword)==0){
            printf("login successful"); return 0;
        }  count++;
        printf("wrong password\n");
        }
         if (strcmp(userPassword, originalPassword) < 0) {
            printf("Your input comes BEFORE the correct password alphabetically.\n");
        } else {
            printf("Your input comes AFTER the correct password alphabetically.\n");
        }
        if(count==2){
            if (strncmp(userPassword, originalPassword, 3) == 0) {
                printf("Hint: Your first 3 characters are correct!\n");
            } else {
                printf("Hint: Your first 3 characters are also wrong.\n");
         
        }
        }
    printf("account blocked too many attempts");
        
    
    

    return 0;
}