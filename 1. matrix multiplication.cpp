#include<stdio.h>
int main(){
	int a[10][10],b[10][10],result[10][10];
	int row1,col1,row2,col2;
	printf("enter the rows and columns for matrix 1:");
	scanf("%d %d",&row1,&col1);
	printf("enter the rows and colums for the matrix 2:");
	scanf("%d %d",&row2,&col2);
	if(col1!=row2){
		printf("not able to multiply the matrix");
		return 1;
	}
	printf("enter the matrix 1 rows and columns:\n");
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("enter the matrix 2 rows and columns:\n");
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<row1;i++){
		for(int j=0;j<col2;j++){
			result[i][j]=0;
		}
	}
	for(int i=0;i<row1;i++){
		for(int j=0;j<col2;j++){
			for(int k=0;k<col1;k++){
				result[i][j]=a[i][k]*b[j][k];
			}
		}
	}
	for(int i=0;i<row1;i++){
		for(int j=0;j<col2;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}