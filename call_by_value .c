#include <stdio.h>

void swap(int x, int y);

int main()
{
	int x = 10 , y = 20;
	
	printf("Before swap in main\n");
	printf("x=%d, y=%d\n",x,y);
	
	swap(x,y);
	
	printf("After swap in main\n");
	printf("x=%d,y=%d\n",x,y);
		
}

void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	
	printf("inside swap function \n");
	printf("x=%d , y=%d\n",x,y);
}
