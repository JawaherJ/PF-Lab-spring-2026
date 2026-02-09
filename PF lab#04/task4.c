#include<stdio.h>
int main(){
	char U[20];
	char P[20];
	const char username[]="admin";
	const char password[]="1234";
	
	printf("Enter username : ");
	scanf("%s",& U);
	printf("Enter password : ");
	scanf("%s",&P);
	if (strcmp(U,username)==0 && strcmp(P,password)==0){
	printf("Login Successful");}
	else {
		printf("Invalid Credentials");}
		return 0;
	}
