#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int array[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    int choice;
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortArray(array1, size, 1);
        sortArray(array2, size, 1);
    } else if (choice == 2) {
        sortArray(array1, size, 0);
        sortArray(array2, size, 0);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Sorted first array in the desired order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Sorted second array in the desired order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
