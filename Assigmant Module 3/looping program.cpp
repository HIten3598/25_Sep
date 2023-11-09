#include <stdio.h>

int main() {
    int numbers[10]; // Array to store 10 numbers
    int i, n;
    int sum = 0, max, min;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // Taking 10 numbers as input from the user
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Calculating sum
        if (numbers[i] % 2 == 0) {
            evenCount++; // Counting even numbers
            evenSum += numbers[i]; // Calculating sum of even numbers
        } else {
            oddCount++; // Counting odd numbers
            oddSum += numbers[i]; // Calculating sum of odd numbers
        }
    }

    // Calculating average
    float average = (float)sum / 10;

    // Printing the results
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    // Printing the multiplication table up to the given number
    printf("\nEnter a number to print its multiplication table: ");
    scanf("%d", &n);
    printf("Multiplication table for %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
