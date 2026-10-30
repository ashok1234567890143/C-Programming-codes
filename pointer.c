#include <stdio.h>

void swap(int *p1, int *p2);

int main()
{
	int x = 10 , y = 20;
	
	printf("Before swap in main\n");
	printf("x=%d, y=%d\n",x,y);
	
	swap(&x,&y);
	
	printf("After swap in main\n");
	printf("x=%d,y=%d\n",x,y);
		
}

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf("inside swap function \n");
	printf("x=%d , y=%d\n",*p1,*p2);
}
