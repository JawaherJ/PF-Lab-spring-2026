#include<stdio.h>
#include<string.h>

int main(){
    char username[20];
    char password[10];
    int OTP;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    printf("Enter OTP: ");
    scanf("%d", &OTP);

    if(strcmp(username, "admin") == 0){
        if(strcmp(password, "1234") == 0){
            if(OTP == 4444){
                printf("Login successful\n");
            } else {
                printf("Invalid OTP\n");
            }
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Invalid username\n");
    }

    return 0;
}