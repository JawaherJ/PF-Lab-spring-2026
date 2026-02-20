#include<stdio.h>
#include <math.h>
int main(){
    int choice;
    double a, b, result;

    printf("---Scientific Calculator---\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.square root\n");
    printf("6.power (x^y)\n");
    printf("7.logarithm (log10)\n");
    printf("8.absolute value\n");
    printf("9.sine\n");
    printf("10.cosine\n");
    printf("11.tangent\n");
    printf("enter choice: \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("enter two numbers: ");
        scanf("%lf %lf",&a,&b);
        result= a+b;
        printf("result: %.2lf\n", result); break;

        case 2:
        printf("enter two numbers: ");
        scanf("%lf %lf",&a,&b);
        result=a-b;
        printf("result: %.2lf\n",result); break;

        case 3:
        printf("enter two numbers: ");
        scanf("%lf %lf",&a,&b);
        result=a*b;
        printf("result: %.2lf\n",result); break;

        case 4: 
        printf("enter two numbers: ");
        scanf("%lf %lf",&a,&b);
        if(b==0){
            printf("Error: division by zero not allowed.\n");
            }
            else{
                result=a/b;
                printf("result: %.2lf\n",result);} break;
            
        case 5:
         printf("Enter a number: ");
            scanf("%lf", &a);
        if(a<0){
            printf("Error: square root of negative number not allowed");
        }
        else{
            result=sqrt(a);
            printf("Result: %.2lf\n", result);} break;
        
            case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf",&a,&b);
            result= pow(a,b);
            printf("Result: %.2lf\n", result); break;

        case 7: 
        printf("enter a number: ");
        scanf("%lf",&a);
        if(a<=0){
            printf("Error: logarithm of zero or negative not allowed.\n");
        } 
        else{
            result=log10(a);
            printf("Result: %.2lf\n", result);
        }
        break;

        case 8:
        printf("enter a number : ");
        scanf("%lf",&a);
        result = fabs(a);
        printf("Result: %.2lf\n", result); break;

        case 9:
        printf("enter angle in degrees: ");
        scanf("%lf",&a);
        result = sin(a*3.14159265/180);
        printf("Result: %.2lf\n", result); break;

        case 10:
        printf("Enter angle in degrees: ");
        scanf("%lf",&a);
        result =cos(a*3.14159265 / 180);
        printf("Result: %.2lf\n", result); break;

        case 11:
           printf("enter angle in degrees: ");
           scanf("%lf",&a);
           result = tan(a*3.14159265 / 180);
           printf("Result: %.2lf\n", result); break;

        default : 
        printf("invalid choice");
    }
    return 0;
}
