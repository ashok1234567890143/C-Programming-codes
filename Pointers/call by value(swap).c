#include <stdio.h>
swap(int a, int b);
int main()
{
	int x=10,y=20;
	printf("\nbefore swap:\nx=%d,y=%d",x,y);
	swap(x,y);
	printf("\nafter swap:\n x=%d,y=%d",x,y);
}
swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\ninside swap:\n a=%d,b=%d",a,b);
}
