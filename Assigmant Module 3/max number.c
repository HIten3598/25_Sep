//#include<stdio.h>
//
//main()
//{
//	
//}

#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);

    int a[100]; // limit the input to 100 numbers
    for(i = 0; i < n; ++i) {
       scanf("%d", &a[i]);
    }

    max = a[0]; // initialize max with first element
    for(i = 1; i < n; ++i) {
        if(a[i] > max) {
            max = a[i]; // update max if needed
        }
    }

    printf("The maximum element is: %d", max);

    return 0;
}