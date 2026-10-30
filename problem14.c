// Wap to print sum of digits of give number.

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = (n < 0) ? -n : n;   // Handles negative numbers

    while (n > 0) {
        digit = n % 10;     // Get last digit
        sum = sum + digit;  // Add it to sum
        n = n / 10;         // Remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
