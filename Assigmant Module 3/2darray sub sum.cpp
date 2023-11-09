#include <stdio.h>

void addMatrix(int mat1[10][10], int mat2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrix(int mat1[10][10], int mat2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[10][10], int mat2[10][10], int result[10][10], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns for first matrix (row col): ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for second matrix (row col): ");
    scanf("%d %d", &row2, &col2);

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (col1 != row2) {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
    } else {
        // Perform addition
        addMatrix(mat1, mat2, result, row1, col1);
        printf("Matrix Addition Result:\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

        // Perform subtraction
        subtractMatrix(mat1, mat2, result, row1, col1);
        printf("Matrix Subtraction Result:\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

        // Perform multiplication
        multiplyMatrix(mat1, mat2, result, row1, col1, row2, col2);
        printf("Matrix Multiplication Result:\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}