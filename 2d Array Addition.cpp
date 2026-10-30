#include <stdio.h>
int main()
{
	
		int i,j,a[2][3],b[2][3],c[2][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the values a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the values b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]= a[i][j] + b[i][j];
		}
	}
	
	
	printf("\n Array A\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",a[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n Array B\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",b[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n Array C\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t ",c[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
	
	
}
