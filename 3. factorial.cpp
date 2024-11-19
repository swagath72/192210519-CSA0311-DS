#include<stdio.h>
int main(){
	int num,fact=1;
	printf("enter the number:");
	scanf("%d",&num);
	if(num<0){
		printf("not possible to find out factorial:");
	}
	else{
		for(int i=1;i<=num;i++){
			fact=fact*i;
		}
	}
	printf("factorial is %d",fact);
}