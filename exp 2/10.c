//10. sum of diagonal elements
#include <stdio.h>

int main() {
    int n;
    int A[10][10], sum = 0;

    // Input size (square matrix)
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate sum of diagonal elements
    for (int i = 0; i < n; i++) {
        sum += A[i][i];  // main diagonal
    }

    // Display result
    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}

