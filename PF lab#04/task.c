#include <stdio.h>

int main(){
    int choice;
    printf("Select your choice:\n");
    printf("1. Balance inquiry\n");
    printf("2. Cash withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("Your bank balance is: $1000\n");
            break;
        case 2:
            printf("Please enter your pin\n");
            break;
        case 3:
            printf("Insert/Place Cash\n");
            break;
        case 4:
            printf("Thank you for using ATM\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
