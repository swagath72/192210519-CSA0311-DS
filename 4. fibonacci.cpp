#include<stdio.h>
int main(){
	int num,first=0,second=1,next;
	printf("enter the number:");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		if(num<0){
			next=i;
		}
		else{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d ",next);
	}
}