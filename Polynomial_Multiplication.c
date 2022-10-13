//Multiply two polynomials
#include<stdio.h>
struct poly{
	int cof;
	int exp;
};
struct poly a[10];
struct poly b[10];
struct poly m[20];
struct poly tempPoly;
void main(){
	int n,i,j,k=0,temp;
	printf("\n Enter the number of Terms:");
	scanf("%d",&n);
	printf("\n Enter the First Expression------>");
	for(i=0;i<n;i++){
		printf("\n Enter the coefficent:");
		scanf("%d",&a[i].cof);
		printf(" Enter the Exponent:");
		scanf("%d",&a[i].exp);
	}
	printf("\n Enter the Second Expression------>");
	for(i=0;i<n;i++){
		printf("\n Enter the coefficent:");
		scanf("%d",&b[i].cof);
		printf(" Enter the Exponent:");
		scanf("%d",&b[i].exp);
	}
	printf("\n ------> ");
	for(i=0;i<n-1;i++){
		if(a[i].exp!=0){
			printf("%dX^%d",a[i].cof,a[i].exp);
			printf("%s",a[i+1].cof>0?"+":"");
		}
		else{
			printf("%d",a[i].cof);
			printf("%s",a[i+1].cof>0?"+":"");
		}
	}
	if(a[i].exp!=0)
			printf("%dX^%d",a[i].cof,a[i].exp);
		else
			printf("%d",a[i].cof);
	printf("*(");
	for(i=0;i<n-1;i++){
		if(b[i].exp!=0){
			printf("%dX^%d",b[i].cof,b[i].exp);
			printf("%s",b[i+1].cof>0?"+":"");
		}
		else{
			printf("%d",b[i].cof);
			printf("%s",b[i+1].cof>0?"+":"");
		}
	}
	if(b[i].exp!=0)
			printf("%dX^%d",b[i].cof,b[i].exp);
		else
			printf("%d",b[i].cof);
	printf(")");
	printf("\n ------> ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[k].cof=a[i].cof * b[j].cof;
			m[k].exp=a[i].exp + b[j].exp;
			k++;	
		}
	}
	for(i=0;i<k-1;i++){
		if(m[i].exp!=0){
			printf("%dX^%d",m[i].cof,m[i].exp);
			printf("%s",m[i+1].cof>0?"+":"");
		}
		else{
			printf("%d",m[i].cof);
			printf("%s",m[i+1].cof>0?"+":"");
		}
	}
	if(m[i].exp!=0)
			printf("%dX^%d",m[i].cof,m[i].exp);
		else
			printf("%d",m[i].cof);
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			if(m[i].exp==m[j].exp){
				m[i].cof=m[i].cof+m[j].cof;
				temp=j;
				while(temp!=k){
					m[temp].cof=m[temp+1].cof;
					m[temp].exp=m[temp+1].exp;
					temp++;
				}
				k--;
			}
		}
	}
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			if(m[i].exp<m[j].exp){
				tempPoly=m[i];
				m[i]=m[j];
				m[j]=tempPoly;
			}
		}
	}
		
	printf("\n ------> ");
	for(i=0;i<k-1;i++){
		if(m[i].exp!=0){
			printf("%dX^%d",m[i].cof,m[i].exp);
			printf("%s",m[i+1].cof>0?"+":"");
		}
		else{
			printf("%d",m[i].cof);
			printf("%s",m[i+1].cof>0?"+":"");
		}
	}
	if(m[i].exp!=0)
			printf("%dX^%d",m[i].cof,m[i].exp);
		else
			printf("%d",m[i].cof);
	
}
