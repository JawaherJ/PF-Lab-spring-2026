#include<stdio.h>
int main(){
    float totalamount, discount, finalamount;

    printf("Enter total purchase amount");
    scanf("%f",&totalamount);
       if(totalamount >= 5000){
        discount = totalamount * 0.20; 
        printf("\nDiscount: 20%%\n");
    }
    else if(totalamount >= 3000){
        discount = totalamount * 0.10;  
        printf("\nDiscount: 10%%\n");
    }
    else{
        discount = 0; 
        printf("\nDiscount: 0%%\n");
    }
    finalamount = totalamount - discount;
    
    printf("Original total purchase amount: %.2f\n", totalamount);
    printf("Discount Amount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalamount);
    
    return 0;


}