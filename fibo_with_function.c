#include <stdio.h>

int fibo( int n)
{
	int i , a =0, b=1, c;
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
	int main()
	{
		int j , n;
		
		printf("Enter the Number:");
		scanf("%d",&n);
		
		for(j=1;j<=n;j++)
		{
			printf("%d ,",fibo(j));
			
		}
		return 0;
	}

