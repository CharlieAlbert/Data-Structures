#include<stdio.h>
int main(){
	
	int i, n, a[50];
	
	printf("Select the number of items to store in the array\n");
	scanf("%d\n", n);
	
	printf("Enter array items\n");
	for(i=0; i<n; i++){
		printf("element %d - %d\n", &i, &a[i]);
	}
	
	
	
	
	
}
