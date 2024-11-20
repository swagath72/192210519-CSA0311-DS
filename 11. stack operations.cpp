#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main(){
	int stack[MAX];
	int top = -1;
	int choice,value;
	while(1){
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display stack\n");
		printf("4.exit\n\n");
		printf("select the options:");
		scanf("%d",&choice);
		if(choice==1){
			if(top==MAX-1){
				printf("stack is full:");
			}
			else{
				printf("enter the element to push:");
				scanf("%d",&value);
				top++;
				stack[top] = value;
                printf("%d pushed into the stack.\n", value);
			}
		}
		else if(choice==2){
			if(top==-1){
				printf("stack is empty:");
			}
			else{
				printf("Element %d is popped.\n", stack[top]);
				top--;
			}
		}
		else if(choice==3){
			if (top == -1) {
                printf("Stack is empty.\n");
            } else {
                printf("Stack elements:\n");
                for (int i = top; i >= 0; i--) {
                    printf("%d\n", stack[i]);
				}
			}
		}
		else if(choice==4){
			printf("program is exited.");
			break;
		}
		else{
			printf("invalid chioce.");
		}
	}
}