#include<stdio.h>
int main()
{
	int a,b;
	a=1;
	printf("Enter the value:");
	scanf("%d",&b);
	do
	{
		printf("%d\n",a);
		a++;
	} while(a<=b);
	return 0;
}
