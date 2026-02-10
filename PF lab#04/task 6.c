#include<stdio.h>
int main(){
     int s1, s2,s3 ,s4 ,s5;
     float percentage;
     int total;


    printf("Enter marks for subject 1 : ");
    scanf("%d",&s1);
    printf("Enter marks for subject 2 : ");
    scanf("%d",&s2);
        printf("Enter marks for subject 3 : ");
    scanf("%d",&s3);
        printf("Enter marks for subject 4 : ");
    scanf("%d",&s4);
        printf("Enter marks for subject 5 : ");
    scanf("%d",&s5);

    total = s1+s2+s3+s4+s5;
    percentage= (total/500)*100;
      printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: ");
        if(percentage >= 85){
        printf("A\n");
    }
    else if(percentage >= 70){
        printf("B\n");
    }
    else if(percentage >= 50){
        printf("C\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}