#include <stdio.h>

int main(){
  FILE *fptr;
  char product[50];
  int quantity;
  
  fptr=fopen("inventory.txt","a");
  if(fptr==NULL){
      printf("error opening file\n");
      return 1;
  }
  printf("enter product name: ");
  scanf("%s",product);
  printf("enter quantity: ");
  scanf("%d",&quantity);
  
  fprintf(fptr, "%s %d\n",product,quantity);
  fclose(fptr);
  
  fptr=fopen("inventory.txt","r");
  if(fptr==NULL){
      printf("error openihng file\n");
      return 1;
  }
  while(fscanf(fptr, "%s %d",product,quantity)!=EOF){
      printf("%S %d\n",product,quantity);
  }
  fclose(fptr);
 
    return 0;
}
