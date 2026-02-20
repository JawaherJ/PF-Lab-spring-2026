#include<stdio.h>
int main(){
    int maincategory,item, quantity;
    float price, totalBill;
    printf("Select a category : \n");
    printf("select 1 for Fast Food and 2 for Desi Food\n");
    scanf("%d",&maincategory);

    switch(maincategory){
        case 1:
        printf("select item : \n");
        printf("select 1 for Burger (Rs.500)\n and 2 for Pizza(Rs.1200)\n");
        scanf("%d",&item);
        switch(item){
            case 1: 
            price=500;
            printf("you selected burger\n"); break;
            case 2:
            price =1200;
            printf("you selected pizza\n"); break;
            default :
            printf("invalid selection for fast food\n"); break;
            return 0;
        }
        case 2:
        printf("You selected Desi food. please select an item : \n");
        printf("Select 1 for biryani (Rs.350)\n and 2 for karahi(Rs.1500)\n");
        scanf("%d",&item);

        switch(item){
            case 1: 
            price=350;
            printf("you selevted biryani \n"); break;
            case 2:
            price= 1500;
            printf("you selected karahi\n"); break;
            default :
            printf("Invalid selection\n");
            return 0;
        }
        break;
    
    default :
    printf("invalid category selection\n");
    return 0;
    }
    printf("please enter quantity : \n");
    scanf("%d",&quantity);

    totalBill=price*quantity;
    printf("total bill of %d items : Rs. %.2f\n",quantity,totalBill);

    return 0;
      
}