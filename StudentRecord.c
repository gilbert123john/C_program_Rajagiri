#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int studentId;
	char studentName[25];
	int Math_mark;
	int Phy_mark;
	int Che_mark;
	struct node *next;
};
struct node *head;
typedef struct node student;
void insert(){
	student *t;
	if(head==NULL){
		head=(struct node *)malloc(sizeof(struct node));
		
		printf("\nEnter the Roll No of Student:");
		scanf("%d",&head->studentId);
		getchar();
		printf("\nEnter the Student Name:");
		gets(head->studentName);
		printf("\nEnter the Marks of Maths:");
		scanf("%d",&head->Math_mark); 
		printf("\nEnter the Marks of Physics:");
		scanf("%d",&head->Phy_mark);
		printf("\nEnter the Marks of Chemistry:");
		scanf("%d",&head->Che_mark);
		head->next=NULL;
	}
	else{
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		
		printf("\nEnter the Roll No of Student:");
		scanf("%d",&t->next->studentId);
		getchar();
		printf("\nEnter the Student Name:");
		gets(t->next->studentName);
		printf("\nEnter the Marks of Maths:");
		scanf("%d",&t->next->Math_mark);
		printf("\nEnter the Marks of Physics:");
		scanf("%d",&t->next->Phy_mark);
		printf("\nEnter the Marks of Chemistry:");
		scanf("%d",&t->next->Che_mark);
		t->next->next=NULL;	
	}
}
void dispLinkList(){
	student *t;
	t=head;
	while(t!=NULL){
		printf("\nStudent Roll No: %d",t->studentId);
		printf("\nStudent Name: %s",t->studentName);
		printf("\nMaths Mark: %d",t->Math_mark);
		printf("\nPhysics Mark: %d",t->Phy_mark);
		printf("\nChemistry Mark: %d",t->Che_mark);
		printf("\n********************************");
		t=t->next;
	}	
}
void main(){
	int ch;
	do{
		printf("\n***************STUDENT DETAILS******************");
		printf("\n1.INSERT STUDENT RECORD\n2.DISPLAY STUDENT RECORDS\n3.EXIT\nENTER YOUR CHOICE:");	
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert();
			break;
			case 2:
				dispLinkList();
			break;	
		}
	}while(ch!=3);	
}

