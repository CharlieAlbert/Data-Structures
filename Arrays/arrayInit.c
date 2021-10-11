#include<stdio.h>
int main(){
	
	int i;
	int j[5] = {1,2,3,4,5};
	
	printf("displaying array items\n");
	
	for(i=0; i<5; i++){
		printf("[%d] = %d\n", i, j[i]);
	}	
	
	return 0;
	
}
