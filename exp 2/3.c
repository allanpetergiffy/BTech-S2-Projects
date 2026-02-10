//3. Write a C program to print the array in reverse order.
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements in reverse order are:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}

