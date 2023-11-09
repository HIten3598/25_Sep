#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Asking user for the number of terms in the Fibonacci series
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Printing the first two terms of the Fibonacci series
    printf("Fibonacci Series: %d, %d, ", first, second);

    // Generating the Fibonacci series up to n terms
    for (i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}