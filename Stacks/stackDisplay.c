#include<stdio.h>
#define N 5

int stack [N];
int top = -1;

int push (int item){
	
	if(top == N-1){
		printf("Stack is full, EXIT!\n");
	}
	else{
		top = top + 1;
		stack[top] = item;
	}
	
}

int peek(){
	return stack[top];
}

void display(){
	
	int i;
	for(i = top; i>=0; i--){
		printf("%d\n", i);
	}
	
}

int main(){
	
	push(10);
	push(30);
	push(50);
	
	display();
	
	printf("Item at the top of the stack: %d\n", peek());
	
	return 0;
	
}
