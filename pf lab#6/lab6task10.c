#include<stdio.h>
int main(){
    int rating;
    int excellent=0, satisfactory =0, imprvmt=0;

    printf("Enter employee performance rating(-1 to stop) :\n");
    scanf("%d",&rating);
    while(rating!=-1){
       if(rating>=85){
        excellent++;
       }else if(rating>=60){
        satisfactory++;
       }else{
        imprvmt++;
       }
          printf("Enter employee performance rating(-1 to stop) :\n");
    scanf("%d",&rating);
    }
    printf("Excellent employees are %d\n",excellent);
    printf("satifactory employees are %d\n",satisfactory);
    printf("%d employee need improvement\n",imprvmt);

    return 0;
}