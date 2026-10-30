#include <stdio.h>
int main()
{
	int a[5]={9,20,10,5,5},i,largest=a[0];
	
	for(i=1;i<5;i++)
	{
		if(largest < a[i])
		{
			largest = a[i];
		}
	}
	printf("Largest Element : %d", largest);
	
	return 0;
}
