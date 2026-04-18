
#include <stdio.h>
  float applyDiscount(float price, int tier){
     float discount;
     if(tier==1){
         discount= price -(price*0.05);
     }else if(tier==2){
         discount= price -(price*0.10);
     }else if (tier==3){
         discount=price - (price*0.20);
     }else if(tier==4){
         discount=price-(price*0.30);
     }else{
         discount=price; 
     }
     return discount;
  }
void printInvoice(float original, float discount){
    float discountAmount= original- discount;
    float delivery=0;
    float total;
    if(discount<2000){
        delivery=200;
    }
    total=discount+delivery;
    
    printf("\n      INVOICE     \n");
    printf("original price: Rs. %.2f\n",original);
    printf("Discount Amount : Rs. %.2f\n", discountAmount);
    printf("After Discount  : Rs. %.2f\n", discount);
      if (delivery > 0) {
        printf("Delivery Charge : Rs. %.2f\n", delivery);
    } else {
        printf("Delivery Charge : Free\n");
    }
     printf("                               \n");
    printf("Total Payable   : Rs. %.2f\n", total);
    printf("                                 \n");
}

int main(){
   float price, discounted;
    int tier;

    printf("Enter original order price: Rs. ");
    scanf("%f", &price);

    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    discounted = applyDiscount(price, tier);
    printInvoice(price, discounted);
    return 0;
}
