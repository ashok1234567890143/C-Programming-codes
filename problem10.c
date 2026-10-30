#include <stdio.h>

int main() 
{
    int n, term = 1, add = 2;
    int i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    
	for(i = 1; i <= n; i++) 
	{
        printf("%d ", term);

        term = term + add;

        if (i % 2 == 1)
            add--;   // 2 becomes 1, 3 becomes 2, ...
        else
            add += 2; // 1 becomes 3, 2 becomes 4, ...
    }

    return 0;
}
