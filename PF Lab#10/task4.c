#include <stdio.h>
#include <string.h>

    int main(){
       char names[5][30];
       char search[30];
       int found=0;
       printf("enter students names: \n");
       for(int i=0;i<5;i++){
           printf("student %d: ",i+1);
           fgets(names[i],30,stdin);
           names[i][strcspn(names[i],"\n")]='\0';
       }
       printf("\n ROLL CALL \n");
       for(int i=0;i<5;i++){
           printf("position %d :",i);
           fputs(names[i],stdout);
           printf("\n");
       }
       printf("\nenter a name to search : ");
       fgets (search,30,stdin);
       search[strcspn(search,"\n")]='\0';
       for(int i=0;i<5;i++){
           if(strcmp(search,names[i])==0){
               printf("found at  position %d\n",i);
               found=1;
               break;
           }
       }
       if (found==0){
           printf("student not found\n");
       }

    return 0;
}