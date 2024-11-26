#include<stdio.h>
#include<stdlib.h>
#define n 100

int queue[n];
int front = 0;
int back = 0;

int enqueue(int data);
int dequeue();
void print();

void main(){
	int data,ch;
	while(1){
	printf("Enter the operation you want to perform :\n");
	printf("1. Enqueue,\n2. Dequeue,\n3. display,\n4. Quit.");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the number to enqueue :");
			scanf("%d",&data);
			if(enqueue(data)){
				printf("Enqueue operation was successful.");
			}else{
				printf("Queue is full.\n");
			}
			break;
		case 2:
			data = dequeue();
			if(data){
				printf("Data => %d",data);
			}else{
				printf("Queue is empty.");
			}
			break;
		case 3:
			print();
			break;
		case 4:
			exit(0);
			break;
		default :
			printf("Invalid choice");
		}
		printf("\n");
	}
}
int enqueue(int data){
	if(back == n){
		return 0;
	}else{
		queue[back] = data;
		back += 1;
		return 1;
	}
}
int dequeue(){
	if(front == back){
		return 0;
	}else{
		int data = queue[front];
		front += 1;
		return data;
	}
}
void print(){
	int i;
	if(front != back){
		for(i = front;i < back;i++){
			printf("%d ",queue[i]);
		}
	}
}
