/*Write a C program to input two matrices of the same order. Calculate their sum and display the resulting matrix. If the matrices have different orders, display an appropriate message*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    int matrix1[rows1][cols1];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrices have different orders. Cannot calculate sum.\n");
        return 0;
    }

    int matrix2[rows2][cols2];
    int sum_matrix[rows1][cols1];

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculating the sum of the two matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The resulting sum matrix is:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}