#include<stdio.h>
int main(){
	int units;
	printf("Enter your total units consumed");
	scanf("%d",&units);
	if(units<=100){
		printf("low usage");}
		else if(units >=101 && units<=300){
			printf("medium usage");}
			else {
				printf("high usage");
			}
			return 0;
}

