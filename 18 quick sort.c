#include<stdio.h>
void swap(int* a,int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
int partion(int a[],int low,int high){
	int pivot = a[high];
	int i = (low - 1);
	for(int j = low;j <= high-1;j++){
		if(a[j] < pivot){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(a[i+1],a[high]);
	return(i+1;)
}
void quicksort(int a[],int high,int low){
	if(low<high){
		int pi= partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
	}
}
void printArray(int arr[], int size) {  
    int i;  
    for (i = 0; i < size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  
  
int main() {  
    int arr[] = { 12, 17, 6, 25, 1, 5 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    printf("Sorted array: \n");  
    printArray(arr, n);  
    return 0;  
}  
