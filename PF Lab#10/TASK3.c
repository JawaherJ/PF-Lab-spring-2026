#include <stdio.h>
#include <string.h>

    int main(){
        char email[100];
        char emailcopy[100];
        char display[150];
        char *atsign;
        char *domain;
        
        printf("enter your email address : ");
        fgets(email,100,stdin);
        email[strcspn(email,"\n")]='\0';
        
        strcpy(emailcopy,email);
        printf("original email : %s\n",email);
        printf("copied email : %s\n",emailcopy);
        
        atsign=strchr(email,'@');
        if(atsign== NULL){
            printf("email address not valid\n");
            return 1;
        }
        domain=atsign+1;
        printf("domain : %s\n",domain);
        
        if(strstr(domain,".")==NULL){
            printf("invalid email\n");
            return 1;
        }
        strcpy(display,"email: ");
        strcat(display,email);
        printf("formatted %s\n",display);
    

    return 0;
}