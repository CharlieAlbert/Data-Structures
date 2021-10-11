#include<stdio.h>
#define MAXSIZE 5

int stack[5];
int top = -1;

int isempty(){
	
	if(top == -1)
		return 1;
	else
		return 0;
	
	
}

int isfull(){
	
	if(top == MAXSIZE)
		return 1;
	else
		return 0;
	
}

int peek(){
	return stack[top];
}

int pop(){
	
	int data;
	
	if(!isempty()){
		data = stack[top];
		top = top - 1;
		return data;
	}
	else{
		printf("could not retrieve data, stack is empty.\n");
	}
	
}

int push(int data){
	
	if(!isfull()){
		stack[top] = data;
		top = top + 1;
		return stack[top];
	}
	else{
		printf("could not insert data, stack is full.\n");
	}
	
}

int main(){
	
	push(10);
	push(43);
	push(51);
	push(76);
	
	printf("Element at the top of the stack: %d\n", peek());
	printf("Elements in the stack: \n");
	
	while(!isempty()){
		int data = pop();
		printf("%d\n", data);
	}
	
	printf("Stack full: %s\n", isfull()? "true" : "false");
	printf("stack empty: %s\n", isempty()? "true" : "false");
	
	return 0;
}


