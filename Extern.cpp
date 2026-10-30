#include <stdio.h>

extern int x;
fun();
int main()
{
	
	printf("\n x=%d", x);
	fun();
	printf("\n x=%d",x);
}
fun()
{
	x++;
	printf("\n x=%d",x);
}
int x=10;
