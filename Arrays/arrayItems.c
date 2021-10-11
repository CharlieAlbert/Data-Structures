#include<stdio.h>
int main(){
	
	int score[5] = {1,2,3,4,5};
	int i;
	
	printf("Displaying array items:\n");
	
	for(i=0; i<5; i++){
		printf("[%d] = %d\n", i, score[i]);
	}
	return 0;
}
