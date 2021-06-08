#include <stdio.h>
int main()
{
	int i,j,rows,cols;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	printf("Enter number of columns\n");
	scanf("%d",&cols);
	
	int a1[rows][cols],a2[rows][cols],add[rows][cols],subt[rows][cols];
	printf("Enter matrix 1\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("Enter matrix 2\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			add[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	printf("Addition of above matrix is\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			subt[i][j]=a1[i][j]-a2[i][j];
		}
	}
	
	printf("Subtraction of above matrix is\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",subt[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}