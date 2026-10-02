/*Write a C program to input n elements into an array. Input a new element and the position where it should be inserted. Insert the element at the given position by shifting the existing elements to the right. Display the updated array. If the entered position is invalid, display an appropriate message.*/

#include <stdio.h>

int main() {
    int n, i, new_element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &new_element);

    printf("Enter the position (0 to %d) where the element should be inserted: ", n);
    scanf("%d", &position);

    if(position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = new_element;

    printf("The updated array is:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}