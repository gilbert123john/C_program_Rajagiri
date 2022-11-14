#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
	int info;
	struct node *next;
};
struct node *first=NULL,*last=NULL;
void create(){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	int n;
	printf("\n Enter value:");
	scanf("%d",&n); 
	temp->info=n;
	temp->next=NULL;
	if(first==NULL){
		first=temp;
		last=first;
	}
	else{
		last->next=temp;
		last=temp;
	}
}
void insert(int e){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	struct node *prev,*cur;
	prev=NULL;
	cur=first;
	temp->next=NULL;
	temp->info=e;
	int ch,pos,count=1;
	printf("\n 1.INSERT AT 1ST NODE\n 2.INSERT AT LAST NODE\n 3.INSERT AT MIDDLE NODE\n CHOOSE YOUR OPTION:");
	scanf("%d",&ch);
	switch(ch){
		case 1: temp->next=first;
				first=temp;
				break;
		case 2:	last->next=temp;
				last=temp; 
				break;
		case 3:	printf("\n enter position:");
				scanf("%d",&pos);
				while(count!=pos){
					prev=cur;
					cur=cur->next;
					count++;
				}
				if(count==pos){
					prev->next=temp;
					temp->next=cur;
				}
				else
					printf("\n NOT ABLE TO INSERT");
				break;
	}
}
void display()
{
	struct node *t = first;
	if(t == NULL)
	{
		printf("List is Empty\n");
	}
	else{
	printf("\n Elements:\t");	
	while (t != NULL)
	{
		printf("%d\t",t->info);
		t = t->next;
		}
	printf("\n\n");
}
}
void main(){
	int e,c;
		do{
		printf("\n 1.Create\n 2.Insert\n 3.Display\n 4.Exit\n Choose your option:");
		scanf("%d",&c);
		switch(c){
			case 1:create()	;
					break;
			case 2:printf("\n Enter value:");
					scanf("%d",&e);
					insert(e);
					break;
			case 3:display();
				   break;
			case 4:exit(1);
				   break;
		}
	}while(1);
}

