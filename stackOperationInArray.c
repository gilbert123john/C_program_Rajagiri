//9.	Implement stack operations using array 
void main(){
	int ch;
	int top=-1;
	int a[10];
	for(;ch!=4;){
		printf("\n 1.push\n 2.pop\n 3.peek\n 4.exit\n Enter the choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(top+1==10){
					printf("Stack is Full\n");
				}	
				else{
					printf("\n Enter the value to push :");
					scanf("%d",&a[++top]);
				}
				break;
			case 2:
				if(top==-1){
					printf("Stack is Empty\n");
				}	
				else{
					printf("%d is the value deleted",a[top]);
					top--;
				}
				break;
			case 3:
				if(top==-1){
					printf("Stack is Empty\n");
				}	
				else{
					printf("%d is the value @ Top",a[top]);
				}
				break;
			case 4:
				break;
			default:
				printf("Invalid data provided----------");
				break;
		}
	}
}
