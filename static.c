#include <stdio.h>

void fun();
int main()
{
	fun();
	fun();
	fun();
}
void fun()
{
	static int x =1;
	x++;
	printf("\n%d",x);
}
