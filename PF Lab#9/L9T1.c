#include <stdio.h>


  float triageScore(float severity, float age, float vitals){
      float score= (severity*0.5)+(age *0.3) + (vitals * 0.2);
      return score;
  }
int main(){
    float severity, age, vital;
    printf("Enter severity level(1-10) : \n");
    scanf("%f",&severity);
    printf("enter agr factor(1-10): \n");
    scanf("%f",&age);
    printf("enter vital (1-10): \n");
    scanf("%f",&vital);
    float score=triageScore(severity,age,vital);
    
    triageScore(severity,age,vital);
    if(score>7.0){
        printf("Immediate attention required");
    }else if(score>4.0 && score<=7.0){
        printf("Moderate priority");
    }else{
        printf("can wait");
    }
    return 0;
}
