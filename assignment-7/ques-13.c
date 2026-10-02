/*Write a C program to input a square matrix and find its transpose. Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. Display the transpose and the result.

*/

#include <stdio.h>

int main() {
    int n, i, j;
    int is_symmetric = 1, is_skew_symmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int transpose[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; // Calculate transpose
        }
    }

    printf("The original matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Check for symmetry and skew-symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                is_symmetric = 0;
            }
            if(matrix[i][j] != -transpose[i][j]) {
                is_skew_symmetric = 0;
            }
        }
    }

    if(is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else if(is_skew_symmetric) {
        printf("The matrix is skew-symmetric.\n");
    } else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}