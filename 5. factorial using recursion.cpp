#include<stdio.h>
unsigned long long factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num<0){
		printf("not possible:");
	}
	else{
		unsigned long long result=factorial(num);
		printf("factorial is=%d",result);
	}
}