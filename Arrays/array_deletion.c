#include<stdio.h>
int main(){
	
	int i;
	int n = 5;
	int k = 3;
	int arr[5] = {1,3,5,6,4};
	
	printf("The elements in the array are : \n");
	for(i=0; i < n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	//deleting element from array
	
	for(i=k-1; i < n; i++){
		arr[i] = arr[i+1];
	}
	n = n - 1 ;
	
	
	printf("Items in array after deletion : \n");
	
	//displaying items after deletion
	
	for(i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
	
}
