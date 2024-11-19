#include<stdio.h>
int main(){
	int i,n,key,mid,low,high;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the elements:");
		scanf("%d",&a[i]);
	}
	printf("enter the key value:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key){
			printf("key value is at %d index",mid);
			break;
		}
		else if(a[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return 0;
}