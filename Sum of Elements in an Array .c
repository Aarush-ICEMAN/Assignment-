#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    int i;
    for ( i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for ( i = 0; i < n; ++i) {
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);

    return 0;
}

