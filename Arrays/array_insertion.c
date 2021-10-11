#include<stdio.h>
int main(){
	
	int i, k, n, item;
	n = 5;
	k = 3;
	item = 10;
	
	int arr[6] = {5,7,8,3,4};
	
	printf("The original array elements are : \n");
	for(i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	
	printf("\n\n\t\t\t---Inserting item into array---\n\n\n");
	n = n + 1;

	//inserting element into the array
	for(i=n; i >= k-1; i--){
		arr[i+1] = arr[i];
	}
	
	arr[k-1] = item;
	
	
	printf("The arrays after insertion are : \n");
	for(i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
	
}
