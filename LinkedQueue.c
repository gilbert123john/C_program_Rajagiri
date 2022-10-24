// Linked Queue
#include<stdio.h>
#include<stdlib.h>
struct q{
	int data;
	struct q * next;
};

struct q *f=NULL,*r=NULL;
struct q *t;

void enqueue(int e){
	t= (struct q*) malloc (sizeof (struct q));
	t->data = e;
	t->next = NULL;
	if(f==NULL){
		f=t;
		r=t;
	}
	else{
		r->next=t;
		r=r->next;
	}
}
void dequeue(){
	if(f==NULL){
		printf("\n Queue is empty...");
	}
	else{
		printf("\n %d is the deleted item",f->data);
		f=f->next;
		if(f==NULL){
			r=NULL;
		}
	}
}
void main(){
	dequeue();
	enqueue(10);
	enqueue(20);
	dequeue();
	dequeue();
	dequeue();
}
