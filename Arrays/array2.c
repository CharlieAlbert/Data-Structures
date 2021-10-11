#include<stdio.h>
int main(){
	
	int n[5];
	int j;
	
	printf("Enter array elements: \n");
	
	for(j=0; j<5; j++){
		scanf("%d\n", &n[j]);
	}
	
	for(j=0; j<5; j++){
		printf("[%d] = %d\n", j, n[j]);
	}
	return 0;
	
}
