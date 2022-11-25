#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left,*right;
};
typedef struct node tree;
tree*root = NULL;
void insert(int e) {
    tree *t, *p;
    if(root == NULL) {
        root = (tree *)malloc(sizeof(tree));
        root->data = e;
        root->left = NULL;
        root->right = NULL;
    }
    else {
        t= root;
        while(t != NULL) {
            p=t;
            if(t->data == e){ 
                printf("Duplicate Key");
                return;
            }
            else if(t->data > e) {
                t = t->left;
            }
            else {
                t = t->right;
            }
        }
        if(p->data > e){
            p->left = (tree *)malloc(sizeof(tree));
            p->left->data = e;
            p->left->left = NULL;
            p->left->right = NULL;
        }
        else {
            p->right = (tree *)malloc(sizeof(tree));
            p->right->data = e;
            p->right->left = NULL;
            p->right->right = NULL;
        }
    }
    
}

void inorder(tree *r) {
    if(r == NULL) 
        return;
    inorder(r->left);
    printf("%d\t",r->data);
    inorder(r->right);
}

void preorder(tree *r) {
    if(r == NULL) 
        return;
    printf("%d\t",r->data);
    preorder(r->left);
    preorder(r->right);
}

void postorder(tree *r) {
    if(r == NULL) 
        return;
    postorder(r->left);
    postorder(r->right);
    printf("%d\t",r->data);
}

int main()
{
	int ch,e,ch1;
	printf("\n BINARY SEARCH TREE\n--------------------");
	do{
	printf("\n1.Insertion\n2.Display\n3.Exit\nChoose your option:");
	scanf("%d", &ch);
	getchar();
	switch(ch){
		case 1:	printf("\nEnter no:");
				scanf("%d",&e);
		    	insert(e);
	    		break;    		
    	case 2:	printf("\n1.Inorder\n2.Preorder\n3.Postorder\nEnter your choice:");
    	        scanf("%d",&ch1);
    	        switch(ch1){
    	        	case 1:printf("\ninorder:");
                           inorder(root);
    	        		   break;
    	        	case 2:printf("\npreorder:");
                           preorder(root);
					       break;
					case 3:printf("\npostorder:");
                           postorder(root);
					       break;	   	   
				}
    			break;
    	case 3:exit(1);
			break;
	}
    }while(1);
    return 0;
}

