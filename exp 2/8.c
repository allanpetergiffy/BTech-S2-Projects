//8.c to write a pgm to read & display a 2 d array
#include <stdio.h>

int main() {
    int rows, cols;
    int arr[10][10];  // 2D array with max size 10x10

    // Input size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display elements
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // new line after each row
    }

    return 0;
}

