#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    average = sum / n;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}