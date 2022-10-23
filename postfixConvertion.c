//Convert an expression from infix to postfix using stack
#include<stdio.h>
int top=-1;
char stack[20];
void push(char ch){
	if(top+1==20){
		printf("\nStack is full--\n");
	}
	else{
		stack[++top]=ch;
	}
}
void pop(){
	if(top==-1){
		printf("\n Stack is empty");
	}
	else{
		printf("%c",stack[top--]);
	}
}
int getVal(char ch){
	switch(ch){
		case '(':
			return 0;
			break;
		case '+':
			return 1;
			break;
		case '-':
			return 1;
			break;
		case '*':
			return 2;
			break;
		case '/':
			return 2;
			break;
		default:
			return 50;
			break;
	}
}
void check(char ch){
	if(ch!=')'){
	
		int valCh = getVal(ch);
		int valStack= getVal(stack[top]);
		if(top==-1 || stack[top]=='('){
		push(ch);
		}
		else if(valCh>valStack){
			push(ch);
		}
		else if(valCh<=valStack){
			pop();
			push(ch);
		}
	}
	else{
		while(stack[top]!='('){
			pop();
		}
		top--;
	}
}
void main(){
	char arr[20];
	int i;
	char ch;
	printf("\n Enter the expression to be converted: ");
	gets(arr);
	printf("The expresion is : %s\n",arr);
	for(i=0;i<strlen(arr);i++){
		ch=arr[i];
		switch(ch){
			case '(':
				push(ch);
				break;
			case '*':
				check(ch);
				break;
			case '/':
				check(ch);
				break;
			case '+':
				check(ch);
				break;
			case '-':
				check(ch);
				break;
			case ')':
				check(ch);
				break;
			default:
				printf("%c",ch);
		}
		
	}
	while(top!=-1){
			pop();
	}
	
}
