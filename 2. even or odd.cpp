#include<stdio.h>
int main(){
	int n,i;
	printf("enter the of elements in list:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d is even\n",a[i]);
		}
		else{
			printf("%d is odd\n",a[i]);
		}
	}
}