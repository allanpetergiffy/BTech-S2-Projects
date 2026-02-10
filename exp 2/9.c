//9. a c pgm to find matrix addition & subtraction
#include <stdio.h>

int main() {
    int m, n;
    int A[10][10], B[10][10], Sum[10][10], Diff[10][10];

    // Input size
    printf("Enter number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition and subtraction
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print sum
    printf("Sum of matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    // Print difference
    printf("Difference of matrices (A - B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

