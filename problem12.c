// 12. Wap to print sum of natural numbers upto n.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of natural numbers up to %d = %d", n, sum);

    return 0;
}
