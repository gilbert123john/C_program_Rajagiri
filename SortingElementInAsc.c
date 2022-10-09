//5.	Sort the array elements in ascending order (minimum three functions - read, disp and sort) 
#include<stdio.h>
#define SIZE 5
int arr[SIZE],i=0,s=0;
void sortArray(){
	int j,temp;
	for(i=0;i<s;i++){
		for(j=i+1;j<s;j++){
			if(arr[i]>arr[j]){
			temp = arr[i];
			arr[i] =arr[j];
			arr[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<s;i++){
		printf("%d\t",arr[i]);
	}
	showMenu();
}

void pushArray(){
	int s1;
	printf("\n How many value do you want to enter :");
	scanf("%d",&s1);
	if(s==SIZE){
		printf("\n ARRAY IS FULL------------");
		showMenu();
	}
	else{
	for(i=s;i<(s+s1)&&i<SIZE;i++){
		printf("\n Enter the element in position [%d] :",i);
		scanf("%d",&arr[i]);
	}
	s=s+s1;
	if(s>SIZE){
		s=SIZE;
	}
	showMenu();
	}
}
void action(int choice){
	switch(choice) {
	case 1:
		pushArray();
		break;
	case 2:
		sortArray();
		break;
	case 3:
		printf("\n");
		for(i=0;i<s;i++){
			printf("%d\t",arr[i]);
		}
		showMenu();
		break;
	case 4:
		break;
	default:
		printf("\n The entered value is not available, please select the correct option :");
		showMenu();
	}
}
showMenu(){
	int choice;
	printf("\n\n \t\t\t\t 1. read \n \t\t\t\t 2. sort  \n \t\t\t\t 3. display \n \t\t\t\t 4. Exit \n\t\t\t PLEASE SELECT A NUMBER FROM GIVEN MENU ----> ");
	scanf("%d",&choice);
	action(choice);
}
void main(){
	printf("__________________Welcome To Sort array program ________________\n");
	showMenu();
}
