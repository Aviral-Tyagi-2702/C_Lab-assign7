/*Write a C program to input two matrices. Check whether they can be multiplied. If multiplication is possible, calculate and display the product matrix; otherwise, display an appropriate message*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;

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

    if(cols1 != rows2) {
        printf("Matrices cannot be multiplied. The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 0;
    }

    int matrix2[rows2][cols2];
    int product_matrix[rows1][cols2];

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initializing product_matrix to zero
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            product_matrix[i][j] = 0;
        }
    }

    // Calculating the product of the two matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                product_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The resulting product matrix is:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", product_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}