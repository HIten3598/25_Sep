#include <stdio.h>

int main() {
    int i, j, k = 1;
    char ch = 'A';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
            if (k % 2 == 0) {
                printf("");
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}
