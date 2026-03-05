#include<stdio.h>
int main(){
      float price, total=0;
      int choice;

      do{
        printf("Enter item price: ");
        scanf("%f",&price);
        total=total+price;

        printf("Add another item? (select 1 if yes, 2 if no): ");
        scanf("%d",&choice);

      }while (choice==1);
        printf("total Bill: $%.2f\n",total);
        
        if(total>3000){
            float discount= total*0.10;
            float payable =total - discount;
            printf("dicount: $%.2f\n",discount);
            printf("final amount : $%.2f\n",payable);
        }else{
            printf("final amount: $%.2f\n",total);
        }
        return 0;
    }
      