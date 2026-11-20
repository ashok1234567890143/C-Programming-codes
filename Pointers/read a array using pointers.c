#include<stdio.h>
int main()
{
	int a[5],*p=a,i;
	
	for( i=0;i<5;i++)
	{
		printf("\n Emter value of a[%d]=",i);
		scanf("%d",p+i);
	}
	
	printf("\nArray A");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
}
