#include<stdio.h>
int main(){
	
	int i, p, n, t, arr[100];
	
	printf("Enter number of values in the array: \n");
	scanf("%d", &n);
	
	printf("Enter array values: \n");
	for(i=0; i<n; i++){
		scanf("%d\n", &arr[i-1]);
	}
	
	printf("Values entered are: \n");
	for(i=0; i<n; i++){
		scanf("arr[%d] = %d", i, arr[i-1]);
	}
	
	printf("Enter position to be updated");
	scanf("%d", &p);
	
	printf("Enter value to be updated");
	scanf("%d", &t);
	
	for(i=0; i<n; i++){
		if(i==p){
			arr[i]=t;
		}
	}
	
	printf("Updated value is:\n");
	for(i=0; i<n; i++){
		scanf("arr[%d] = %d", i, arr[i]);
	}
	
	
	return 0;
	
	
	
}
