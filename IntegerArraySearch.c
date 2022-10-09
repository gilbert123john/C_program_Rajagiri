//4.	Search for all the occurrence of an element in an integer array (positions) 
#include<stdio.h>
void main(){
	int arr[10],searchElement,flag=1,i;
	printf("\n Enter 10 array elements :");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the search element :");
	scanf("%d",&searchElement);
	for(i=0;i<10;i++){
		if(arr[i]==searchElement){
			flag=0;
			printf("\n The element is found at position [%d]",i+1);	
			}
		}
		if(flag){
			printf("\n ----------------Element not Found --------------------");	
		}
}
