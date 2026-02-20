#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three sides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b<=c || a+c<=b || b+c<=a){
        printf("not valid triangle");
    }
    else if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles triangle");
    }
    else{
        printf("scalene traingle");
    }
    return 0;
}
