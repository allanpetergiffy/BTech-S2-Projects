//5 to find second largest in an array

#include <stdio.h>

int main() {
    int n, i;
    int largest, second;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second
    if(arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Traverse from the 3rd element
    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("The second largest element is %d\n", second);

    return 0;
}
