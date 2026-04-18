#include <stdio.h>

int main(){
    FILE *fptr;
    char name[20];
    int grade;
    
    fptr=fopen("grades.txt","w");
    if(fptr==NULL){
        printf("error opening file\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        printf("enter student %d name : \n",i+1);
        scanf("%s",name);
        printf("enter grade of student %d : \n",i+1);
        scanf("%d",&grade);
        fprintf(fptr, "%s %d\n", name,grade);
    }
    fclose(fptr);
    fptr=fopen("grades.txt","r");
    if(fptr==NULL){
        printf("error opening file\n");
        return 1;
    }
    printf("stored records : \n");
    while(fscanf(fptr, "%s %d",name,&grade)!=EOF){
        printf("name : %s, grade: %d\n",name,grade);
    }
    fclose(fptr);
 
    return 0;
}