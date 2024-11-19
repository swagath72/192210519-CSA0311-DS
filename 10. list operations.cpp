#include<stdio.h>
#define MAX 100
int main(){
	int list[MAX];
	int size=0,choice,element,position;
	while(1){
		printf("option\n");
		printf("1. show list\n");
		printf("2. insert elements\n");
		printf("3. delete the element\n");
		printf("4. exit\n\n");
		printf("enter the choice above:");
		scanf("%d",&choice);
		if(choice==1){
			if(size==0){
				printf("list is empty.\n\n");
			}
			else{
				printf("list:");
				for(int i=0;i<size;i++){
					printf("%d \n",list[i]);
				}
			}
		}
		else if(choice==2){
			printf("enter the element:");
			scanf("%d",&element);
			printf("enter the position:");
			scanf("%d",&position);
			if(position < 0 || position > size){
				printf("position is invalid:");
			}
			else{
				for(int i=size;i>position;i--){
					list[i]=list[i-1];
				}
				list[position]=element;
				size++;
				printf("element inserted successfully.\n\n");
			}
		}
		else if(choice==3){
			if(size==0){
				printf("list is empty.");
			}
			else{
				printf("enter the position of the element:");
				scanf("%d",&position);
				for(int i=position;i<size-1;i++){
					list[i]=list[i+1];
				}
				size--;
				printf("element deleted successfully.");
			}
		}
		else if(choice==4){
			printf("program exited.");
			break;
		}
		else{
			printf("error:");
		}
	}
	return 0;
}