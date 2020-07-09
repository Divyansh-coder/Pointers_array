#include<stdio.h>
main()
{
	int row,col,i,n,sum=0;
	int *pn=&n;
	printf("Enter number of Rows in Square Matrix: ");
	scanf("%d",pn);
	int matrix[n][n];
	int *point[n][n],*psum=NULL;
	for (row=0;row<n;row++)    // taking entries in matrix
	{
		for(col=0;col<n;col++)
		{
			printf("element = [%d][%d]: ",row,col);
			point[row][col]=&matrix[row][col];    //assigning address of variable to pointer
			scanf("%d",point[row][col]);
			
		}
	}
//	display of matrix
	for (row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d ",*point[row][col]);    //printing matrix from pointer
			if (col==n-1)
			{
				printf("\n");	
			}	
		}
	}
//  sum of diagonal elements
	for(i=0;i<n;i++)
	{
		sum+=*point[i][i];       //calculating sum from pointer
	}
	psum=&sum;
	printf("Sum of diagonal elements= %d",*psum);
	return 0;
}
