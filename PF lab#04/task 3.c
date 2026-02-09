#include<stdio.h>
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a>0)
	printf("Number is positive");
	else if(a<0)
	printf("Number is negative");
	else 
	printf("Number is 0");
	return 0;
}
