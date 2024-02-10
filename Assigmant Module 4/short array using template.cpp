#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Sort an array of integers
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(int);
    
    std::cout << "Before sorting (integers): ";
    displayArray(intArray, intSize);

    selectionSort(intArray, intSize);

    std::cout << "After sorting (integers): ";
    displayArray(intArray, intSize);

    // Sort an array of doubles
    double doubleArray[] = {3.14, 2.71, 1.618, 0.987, 2.718};
    int doubleSize = sizeof(doubleArray) / sizeof(double);

    std::cout << "Before sorting (doubles): ";
    displayArray(doubleArray, doubleSize);

    selectionSort(doubleArray, doubleSize);

    std::cout << "After sorting (doubles): ";
    displayArray(doubleArray, doubleSize);
}