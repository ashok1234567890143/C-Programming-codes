#include<stdio.h>
int main()
{
	int var1 = 60, var2 = 70;
	int *const ptr= &var1;
	printf("\n%d",*ptr);
	printf("%d\n",*ptr);
	//ptr = &var2;// invalid Error will raise
	
	return 0;
}
