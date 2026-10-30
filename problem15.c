// Wap to print reverse of given number.

#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;              // Get last digit
        reverse = reverse * 10 + digit; // Add it to reverse
        n = n / 10;                  // Remove last digit
    }

    printf("Reverse number = %d", reverse);

    return 0;
}
