// 10.	Reverse a string using Stack
#include<stdio.h>
#include<string.h>
char stack[20];
int top=-1;
void push(char ch){
	if(top+1==20){
		printf("Stack is full\n");
	}	
	else{
		stack[++top]=ch;
	}
}
void pop(){
	printf("%c",stack[top]);
	--top;
}
void main(){
	char str[20];
	int i;
	printf("\n Enter the String :");
	gets(str);
	for(i=0;i<strlen(str);i++){
		push(str[i]);
	}
	while(top!=-1){
		pop();
	}
}
