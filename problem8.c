#include <stdio.h>

int main()
{
	int i,n;
	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	printf("Series:");
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",(i*i*i)+2);
		
	}
	return 0;
}
