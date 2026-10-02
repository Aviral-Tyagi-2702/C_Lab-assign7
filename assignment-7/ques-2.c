#include <stdio.h>

int main() {
    int n, i, element, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    printf("The element %d is found at positions: ", element);
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("%d ", i);
            count++;
        }
    }

    if(count == 0) {
        printf("\nElement not found in the array.\n");
    } else {
        printf("\nTotal occurrences: %d\n", count);
    }

    return 0;
}