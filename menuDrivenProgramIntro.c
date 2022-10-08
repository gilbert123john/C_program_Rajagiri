//2.	Use a menu driven program to insert, search, delete and sort elements in an array using functions (use global variables) 
#include<stdio.h>
#define SIZE 20
int arr[SIZE],i=0,s=0;
void sortAsc(){
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
	printf("\n Sorting Completed ");
}
void sortDes(){
	int j,temp;
	for(i=0;i<s;i++){
		for(j=i+1;j<s;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] =arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n Sorting Completed ");
}
void sortArray(){
	if(s==0){
		printf("\n ARRAY IS EMPTY------------");	
		showMenu();	
	}
	int c;
	printf("\n Do you want in Asc or Des \n 1. Asc\n 2. Des\n Select your choice : ");
	scanf("%d",&c);
	if(c==1){	
		sortAsc();
	}
	else if(c==2){
		sortDes();
	}
	else
		printf("\n Invalid option...");
	showMenu();
}
void deletePosition(){
	int deleteP,temp,in=0;
	if(s==0){
		printf("\n ARRAY IS EMPTY------------");	
		showMenu();	
	}
	printf("\n Enter the position to be deleted:");
	scanf("%d",&deleteP);
	if(deleteP>s){
		printf("\n This position is not available------------");	
		showMenu();	
	}
	else{
		for(i=deleteP;i<s;i++){
			in=1;
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
		if(in==1){
			s--;
			in=0;
		}
		printf("\n Element deleted------------");
		showMenu();
	}
}
void deleteSearchValueFromArray(){
	int deleteElement,flag=1,j,temp,in=0;
	printf("\n Enter the element to be deleted:");
	scanf("%d",&deleteElement);
	if(s==0){
		printf("\n ARRAY IS EMPTY------------");	
		showMenu();	
	}
	else{
		for(j=0;j<s;j++){
			for(i=0;i<s;i++){
				if(arr[i]==deleteElement){
					flag=0;
					in=1;
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
				if(in==1){
				s--;
				in=0;
				}
			}
			printf("\n ----------------Element Deleted --------------------\n");
		}
		if(flag){
			printf("\n ----------------Element not Found --------------------\n");	
		}
		showMenu();
}
void searchArray(){
	int searchElement,flag=1;
	printf("\n Enter the search element :");
	scanf("%d",&searchElement);
	if(s==0){
		printf("\n ARRAY IS EMPTY------------");	
		showMenu();	
	}
	else{
		for(i=0;i<s;i++){
			if(arr[i]==searchElement){
				flag=0;
				printf("\n The element is found at position [%d]",i+1);	
			}
		}
		if(flag){
			printf("\n ----------------Element not Found --------------------");	
		}
		showMenu();
	}
}
void display(){
	if(s==0){
			printf("\n ARRAY IS EMPTY------------");	
			showMenu();	
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
		printf("\n Elements entered to Array..");
		showMenu();
	}
}
void action(int choice){
	switch(choice)	{
		case 1:
			pushArray();
			break;
		case 2:
			searchArray();
			break;
		case 3:
			deletePosition();
			break;
		case 4:
			sortArray();
			break;
		case 5:
			display();
			break;
		case 6:
			deleteSearchValueFromArray();
			break;
		case 7:
			break;
		default:
			printf("\n The entered option is not available, please select the correct option :");
			showMenu();
	}
}
showMenu(){
	int choice;
	printf("\n\n \t\t\t\t 1. Insert into array \n \t\t\t\t 2. Search from array \n \t\t\t\t 3. Delete an element from array \n \t\t\t\t 4. Sort the Array  \n \t\t\t\t 5. Display current array \n \t\t\t\t 6.Delete Search Value From Array \n \t\t\t\t 7. Exit \n\t\t\t PLEASE SELECT A NUMBER FROM GIVEN MENU ----> ");
	scanf("%d",&choice);
	action(choice);
}
void main(){
	printf("__________________Welcome To menu driven program for array Functions________________\n");
	showMenu();
}
