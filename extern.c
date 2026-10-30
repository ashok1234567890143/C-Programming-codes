#include <stdio.h>

extern int x;
void fun();
int main()
{
	
	printf("\n x=%d", x);
	fun();
	printf("\n x=%d",x);
}
void fun()
{
	x++;
	printf("\n x=%d",x);
}
int x=10;
