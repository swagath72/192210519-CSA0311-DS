#include<stdio.h>
int main(){
	int i,n,key;
	printf("enter the no of elements in list:");
	scanf("%d",&n);
	int a[n];
	printf("enter the key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		printf("enter the list of elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("key is at index %d",i);
		}
	}
	return 0;
}