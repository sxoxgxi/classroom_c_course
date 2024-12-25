#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int m, int n, int p, int q, int matrixA[m][n], int matrixB[p][q], int result[m][q]) {
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A must match rows of B.\n");
        exit(1);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix (p q): ");
    scanf("%d %d", &p, &q);

    int matrixA[m][n];
    int matrixB[p][q];
    int result[m][q];

    inputMatrix(m, n, matrixA);
    inputMatrix(p, q, matrixB);

    multiplyMatrices(m, n, p, q, matrixA, matrixB, result);

    printf("\nThe product of the matrices is:\n");
    printMatrix(m, q, result);

    return 0;
}
