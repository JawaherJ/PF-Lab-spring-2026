#include <stdio.h>

int main() {
    int pass[10];
    int fail[10];
    int pCount=0,fCount=0,mark;
    
    for(int i=0; i<10;i++){
    printf("Enter mark: ");
    scanf("%d",&mark);
    
    if (mark==-1)break;
    
    if(mark>=5 && mark<=10){
        pass[pCount++] = mark;
    }else if(mark>=0 && mark<5){
       fail[fCount++] = mark;}
       else{
     printf("Invalid mark! Enter between 0-10\n"), i--;
    }
    float pSum = 0;
    printf("\nPass marks: ");
    for (int i = 0; i < pCount; i++) {
        printf("%d ", pass[i]);
        pSum += pass[i];
    }
    if (pCount > 0)
        printf("\nPass average: %.2f\n", pSum / pCount);
    else
        printf("\nNo pass students\n");
}
    float fSum = 0;
    printf("\nFail marks: ");
    for (int i = 0; i < fCount; i++) {
        printf("%d ", fail[i]);
        fSum += fail[i];
    }
    if (fCount > 0)
        printf("\nFail average: %.2f\n", fSum / fCount);
    else
        printf("\nNo fail students\n");

    return 0;
}
