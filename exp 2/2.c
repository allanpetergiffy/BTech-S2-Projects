//2 find sum of elements in an array
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum = sum + arr[i];

    printf("The sum of %d elements is: %d\n", n, sum);

    return 0;
}

