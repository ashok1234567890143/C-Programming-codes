#include<stdio.h>
swap(int *p1,int *p2);
int main()
{
	int x=10,y=20;
	printf("\nbefore swap:\nx=%d,y=%d",x,y);
	swap(&x,&y);
	printf("\nAfter swap:\nx=%d,y=%d",x,y);
}
swap(int *p1, int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	
	printf("\ninside the swap:\n*p1=%d,*p2=%d",*p1,*p2);
}
