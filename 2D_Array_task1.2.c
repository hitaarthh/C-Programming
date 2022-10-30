#include<stdio.h>
void ReadMatrix(int,int,int mat[][10]);
void FindMaxSum(int,int,int mat[][10]);
int main()
{
	int rows,columns;
	printf("Enter the row: ");
	scanf("%d",&rows);
	printf("Enter the column: ");
	scanf("%d",&columns);
	int mat[10][10];
	ReadMatrix(rows,columns,mat);
	FindMaxSum(rows,columns,mat);
	return(0);
}

void ReadMatrix(int rows,int columns,int mat[10][10])
{
	for(int i=0;i<rows;i++)
	
		for(int j=0;j<columns;j++)
		
			scanf("%d",&mat[i][j]);
		
	
	printf("Given matrix: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
			printf("%d ",mat[i][j]);

		printf("\n");
	}
	
}

void FindMaxSum(int rows,int columns,int mat[10][10])
{   
	int index,sum=0,maxSum=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		
			sum+=mat[i][j];
		
		if(sum>maxSum)
		{
			maxSum=sum;
		}
		index=i+1;
	}
	printf("\nMax sum is %d at row %d",maxSum,index);
}
