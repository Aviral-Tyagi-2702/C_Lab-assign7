/*Write a C program to input an m by n matrix. Calculate and display the sum of the elements in each row and each column.*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int row_sum[rows];
    int col_sum[cols];

    // Initialize row and column sums to 0
    for(i = 0; i < rows; i++) {
        row_sum[i] = 0;
    }
    for(j = 0; j < cols; j++) {
        col_sum[j] = 0;
    }

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j]; // Calculate row sum
            col_sum[j] += matrix[i][j]; // Calculate column sum
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    printf("Sum of each column:\n");
    for(j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }

    return 0;
}