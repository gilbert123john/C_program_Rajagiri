#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char data[25];
	struct node *left,*right;
};
typedef struct node tree;
tree * root=NULL;

void insert(char e[25]){
	tree *x,*p;
	if(root==NULL){
		root= (tree *)malloc(sizeof(tree));
		strcpy(root->data,e);
		root->left=NULL;
		root->right=NULL;
	}
	else{
		x=root;
		while(x!=NULL){
			p=x;
			if(strcmp(e,x->data)==1){
				x=x->right;
			}
			else if(strcmp(e,x->data)==-1){
				x=x->left;
			}
		}
		if(strcmp(e,p->data)==1){
			p->right=(tree*)malloc(sizeof(tree));
			strcpy(p->right->data,e);
			p->right->right=NULL;
			p->right->left=NULL;
		}
		else if(strcmp(e,p->data)==-1){
			p->left=(tree*)malloc(sizeof(tree));
			strcpy(p->left->data,e);
			p->left->right=NULL;
			p->left->left=NULL;
		}
	}
}
void displayIn(tree * temp){
	if(temp==NULL){
		return;
	}
	else{
		displayIn(temp->left);
		printf("%s \t",temp->data);
		displayIn(temp->right);
	}
}
void main(){
	int ch,i;
	char val[25];
	while(ch!=3){
	printf("\n1.Insert\n2.Display\n3.Exit\nEnter your choice:");
	scanf("%d",&ch);
	getchar();
	switch(ch){
		case 1:
			printf("\nEnter the data to be inserted:");
			gets(val);
			insert(val);
			break;
		case 2:
			displayIn(root);
			break;
		case 3:
			break;
		default:
			printf("\nInvalid--");
			break;
	}
}
}

