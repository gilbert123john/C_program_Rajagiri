//16.Add two polynomial and display - use array itself
#include<stdio.h>
void main(){
	int n,i,temp;
	printf("Enter the number of terms in Expression:");
	scanf("%d",&n);
	int exp1[n],coef1[n];
	printf("Enter first Expression:\n");
	for(i=0;i<n;i++)
    {
        printf("Enter the coefficient :");
        scanf("%d",&coef1[i]);
        printf("Enter the exponent    :");
        scanf("%d",&exp1[i]);
    }
	int exp2[n],coef2[n];
	int exp3[n],coef3[n];
	printf("Enter second Expression:\n");
	for(i=0;i<n;i++)
    {
        printf("Enter the coefficient :");
        scanf("%d",&coef2[i]);
        printf("Enter the exponent    :");
        scanf("%d",&exp2[i]);
    }
    printf("--------------> Sum is \n ");
    int j;
    for(i=0;i<n;i++)
    {
    	coef3[i]=coef1[i]+coef2[i];
    	exp3[i]=exp1[i];
	}
		
	for(i=0;i<n-1;i++){
        if(exp3[i]==0)
        {
        printf("%d",coef3[i]);
        printf("%s",coef3[i+1]>0?"+":"");
        }
        else
        {
        printf("%dx^%d",coef3[i],exp3[i]);
        printf("%s",coef3[i+1]>0?"+":"");
        }
    
    }
    if(exp3[i]==0)
        {
        printf("%d",coef3[i]);
        printf("%s",coef3[i+1]>0?"+":"");
        }
    else
    printf("%dx^%d",coef3[i],exp3[i]);
    
}
