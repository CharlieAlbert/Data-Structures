#include<stdio.h>
int main(){
	
	int i, found, toSearch, size, arr[100];
	
	
	printf("Enter array size: "); 
	scanf("%d", &size);
	
	printf("Enter array items: ");
	for(i=0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the items to search in the array\:");
	scanf("%d", &toSearch);
	
	found = 0;
	
	for(i=0; i<size; i++){
		
		if(arr[i] == toSearch){
			found = 1;
			break;
		}
	}
	
	if(found == 1){
		printf("\n%d is at position %d\n", toSearch, i + 1);
	} 
	else{
		printf("item %d is not located in the array", toSearch);
	}
	
	return 0;
	
	
	
}
