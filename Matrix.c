// 6.	Two Dimensional Matrix - using functions
#include<stdio.h>
int r,c;
void determinantMatrix(){
	int row,i,j,result;
	printf("Enter the number of rows and column for finding determinant :\n");
	scanf("%d",&row);
	int m1[row][row];
	printf("\n Enter the matrix record\n");
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			scanf("%d",&m1[i][j]);
			}
	}
	if(row==2){
			result= m1[0][0]*m1[1][1]-m1[0][1]*m1[1][0];
	}
	else if(row==3){
			result=0;
			 result+=m1[0][0]*((m1[1][1]*m1[2][2])-(m1[1][2]*m1[2][1]));
			 result-=m1[0][1]*((m1[1][0]*m1[2][2])-(m1[1][2]*m1[2][0]));
			 result+=m1[0][2]*((m1[1][0]*m1[2][1])-(m1[1][1]*m1[2][0]));
	}
	else{
		printf("Determinant is not possible for matrix greater than 3x3")
	}
	printf("\n Determinant is :%d ",result);	
}
void transposeMatrix(){
	int row,column,i,j;
	printf("Enter the number of rows and column :\n");
	scanf("%d %d",&row,&column);
	int m1[row][column],tran[column][row];
	printf("\n Enter the matrix record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m1[i][j]);
			}
	}
	for(i=0;i<column;i++){
		for(j=0;j<row;j++){
			tran[i][j]= m1[j][i];
			}
	}
	printf("Transpose is :\n");	
	for(i=0;i<column;i++){
		for(j=0;j<row;j++){
			printf("%d\t",tran[i][j]);
		}
		printf("\n");
	}
}
void multiplyMatrix(){
	int multi[r][c],i,j,k,sum;
	int row,column;
	printf("Enter the number of rows and column :\n");
	scanf("%d %d",&row,&column);
	r=row;
	c=column;
	int m1[row][column],m2[row][column];
	printf("\n Enter the matrix 1 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m1[i][j]);
			}
	}
	printf("\n Enter the matrix 2 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m2[i][j]);
			}
	}
	for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum=0;
            for(k=0; k<r; k++)
                sum = sum + m1[i][k] * m2[k][j];
            multi[i][j] = sum;
        }
    }
	printf("product is :\n");	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}	
}
void addMatrix(){
	int sum[r][c],i,j;
	int row,column;
	printf("Enter the number of rows and column :\n");
	scanf("%d %d",&row,&column);
	r=row;
	c=column;
	int m1[row][column],m2[row][column];
	printf("\n Enter the matrix 1 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m1[i][j]);
			}
	}
	printf("\n Enter the matrix 2 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m2[i][j]);
			}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]= m1[i][j]+m2[i][j];
		}
	}
	printf("sum is :\n");	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
void substractMatrix(){
	int diff[r][c],i,j;
	int row,column;
	printf("Enter the number of rows and column :\n");
	scanf("%d %d",&row,&column);
	r=row;
	c=column;
	int m1[row][column],m2[row][column];
	printf("\n Enter the matrix 1 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m1[i][j]);
			}
	}
	printf("\n Enter the matrix 2 record\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m2[i][j]);
			}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			diff[i][j]= m1[i][j]-m2[i][j];
		}
	}
	printf("diff is :\n");	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}
}
int menu(){
	int ch;
	printf("\n\n \t\t\t\t 1. Addition \n \t\t\t\t 2. Substraction \n \t\t\t\t 3. Multiplication \n \t\t\t\t 4. Transpose \n\t\t\t\t 5. Diterminant \n\t\t\t\t 6. Exit \n\t\t\t PLEASE SELECT AN OPTION FROM GIVEN MENU ----> ");
	scanf("%d",&ch);
	return ch;
}
void main(){
	
	int choice;
	for(choice=menu();choice!=6;choice=menu()){
	
	switch(choice)	{
		case 1:
			addMatrix();
			break;
		case 2:
			substractMatrix();
			break;
		case 3:
			multiplyMatrix();
			break;
		case 4:
			transposeMatrix();
			break;
		case 5:
			determinantMatrix();
			break;
		case 6:
			break;
		default:
			printf("\n The entered option is not available--");
	}
	}
}
