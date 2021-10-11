#include<stdio.h>
int main(){
	
	int i;
	int n;
	int a[10];
	
	printf("\nEnter the number of values to store in the array\n");
	scanf("%d", &n);
	
	printf("Enter %d numbers to store in the array\n", n);
	
	for(i=0; i<n; i++){
	printf("element - %d : ", i);
	scanf("%d", &a[i]);
	}
	
	printf("\nThe values stored in the array are: \n");
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\nThe values stored in the array in reverse order are as follows: \n");
	
	for(i=n-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	
	return 0;
	
	
}
