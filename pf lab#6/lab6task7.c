#include<stdio.h>
int main(){
    int choice;

    do{
        printf("\nLibrary Menu\nselect 1 for book issue \n 2 for book return \n 3 for Exit\n");
        scanf("%d",&choice);

        if(choice==1){
            printf("Book issued ! ");}
            else if(choice==2){
            printf("Book returned ! ");}
            else if(choice==3){
            printf("Existing...");}
            else{
            printf("Invalid choice");}
    }while(choice!=3);
    return 0;
}