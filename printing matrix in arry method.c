#include<stdio.h>

int main()
{
	int a[5],b[5],c[5],i;
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("Enter the value b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	
	printf("\nThree Arrys\n");
	
	printf("\nArry A\n");
	for(i=0;i<5;i++)
	{
		printf(" %d: ",a[i]);
		
	}
	
	printf("\n Arry B\n");
	for(i=0;i<5;i++)
	{
		printf("%d: ",b[i]);
		
	}
	
	printf("\n Arry C");
	for(i=0;i<5;i++)
	{
		printf(" %d: ",c[i]);
		
	}
	
	return 0;
	
	
}
