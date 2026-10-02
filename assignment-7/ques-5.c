/*Write a C program to find the largest, second-largest, smallest, and second-smallest elements in an array without sorting it*/

#include <stdio.h>

int main() {
    int n, i;
    int largest, second_largest, smallest, second_smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second_largest = arr[0];
    smallest = second_smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);
    printf("Smallest element: %d\n", smallest);
    printf("Second smallest element: %d\n", second_smallest);

    return 0;
}