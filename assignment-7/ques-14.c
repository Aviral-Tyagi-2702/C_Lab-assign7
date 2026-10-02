/*Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these.*/

#include <stdio.h>

int main() {
    int n, i, j;
    int main_diagonal_sum = 0, secondary_diagonal_sum = 0;
    int is_upper_triangular = 1, is_lower_triangular = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                main_diagonal_sum += matrix[i][j]; // Sum of main diagonal
            }
            if(i + j == n - 1) {
                secondary_diagonal_sum += matrix[i][j]; // Sum of secondary diagonal
            }
            if(i > j && matrix[i][j] != 0) {
                is_upper_triangular = 0; // Not upper triangular
            }
            if(i < j && matrix[i][j] != 0) {
                is_lower_triangular = 0; // Not lower triangular
            }
        }
    }

    printf("The original matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of main diagonal elements: %d\n", main_diagonal_sum);
    printf("Sum of secondary diagonal elements: %d\n", secondary_diagonal_sum);

    if(is_upper_triangular && is_lower_triangular) {
        printf("The matrix is a diagonal matrix.\n");
    } else if(is_upper_triangular) {
        printf("The matrix is an upper triangular matrix.\n");
    } else if(is_lower_triangular) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is neither upper triangular nor lower triangular.\n");
    }

    return 0;
}