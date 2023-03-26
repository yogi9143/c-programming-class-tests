Write a program in C to add two matrix having size M by N. Where M and N are given by user.
#include<stdio.h> 

void main() 

{ 

	int i,j,rows,columns; 

	 

	printf("Enter number of rows & columns: "); 

	scanf("%d%d",&rows,&columns); 

	int a[rows][columns], b[rows][columns]; 

 

	printf("Enter first matrix:\n"); 

	for(i=0; i<rows; i++) 

	{ 

		for(j=0; j<columns; j++) 

		{ 

			scanf("%d",&a[i][j]); 

		} 

	} 

	 

	printf("\nEnter second matrix:\n"); 

	for(i=0; i<rows; i++) 

	{ 

		for(j=0; j<columns; j++) 

		{ 

			scanf("%d",&b[i][j]); 

		} 

	} 

	 

	printf("\nThe sum of two matrices will be:\n"); 

	for(i=0; i<rows; i++) 

	{ 

		for(j=0; j<columns; j++) 

		{ 

			printf("%d  ",a[i][j]+b[i][j]); 

		} 

		printf("\n"); 

	} 

} 
