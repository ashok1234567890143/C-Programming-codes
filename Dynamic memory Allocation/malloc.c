#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of Array:");
	scanf("%d",&n);
	
	int *p1=(int *)malloc( sizeof(int)*n);
	int *p2=(int *)malloc( sizeof(int)*n);
	int *p3=(int *)malloc( sizeof(int)*n);
	
	for( i=0;i<n;i++)
	{
		printf("\n Emter value of a[%d]=",i);
		scanf("%d",p1+i);
	}
	
	printf("\nArray A\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p1+i));
	}
	
	for( i=0;i<n;i++)
	{
		printf("\n Emter value of b[%d]=",i);
		scanf("%d",p2+i);
	}
	
	printf("\nArray B\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p2+i));
	}
	
	for(i=0;i<n;i++)
	{
		*(p3+i) = *(p1+i) + *(p2+i);
	}
	
	printf("\nArray c\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p3+i));
	}
	
	free(p1);
	free(p2);
	free(p3);
	
	
	return 0;
}
