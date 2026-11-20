#include<stdio.h>
int main()
{
	int a[5],*p1=a,b[5],*p2=b,c[5],*p3=c,i;
	
	for( i=0;i<5;i++)
	{
		printf("\n Emter value of a[%d]=",i);
		scanf("%d",p1+i);
	}
	
	printf("\nArray A\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p1+i));
	}
	
	for( i=0;i<5;i++)
	{
		printf("\n Emter value of a[%d]=",i);
		scanf("%d",p2+i);
	}
	
	printf("\nArray B\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p2+i));
	}
	
	for(i=0;i<5;i++)
	{
		*(p3+i) = *(p1+i) + *(p2+i);
	}
	
	printf("\nArray c\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p3+i));
	}
	return 0;
}
