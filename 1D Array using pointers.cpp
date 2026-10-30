#include <stdio.h>
int main()
{
	int i,a[5],b[5],c[5];
	int *p1=a,*p2=b,*p3=c;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the values a[%d]: ",i);
		scanf("%d",p1+i);
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the values b[%d]: ",i);
		scanf("%d",p2+i);
	}
	
	for(i=0;i<5;i++)
	{
		*(p3+i)= *(p1+i) + *(p2+i);
	}
	
	printf("\n Array A\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p1+i));
	}
	
	printf("\n Array B\n");
	
	for(i=0;i<5;i++)
	{
        printf("%d\t",*(p2+i));
	}
	
	printf("\n Array C\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p3+i));
	}
}
