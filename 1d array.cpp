#include<stdio.h>
int main()
{
	int a[6],i;
	
	for (i=0;i<6;i++)
	{
		printf("enter the values a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("Array of A");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
