#include <stdio.h>

int main() {
    int i,n;
     long long term =0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = term * 10 + 1;
        printf("%d ", term);
    }

    return 0;
}
