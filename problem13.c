// 13. Wap to print factorial of n .

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}

