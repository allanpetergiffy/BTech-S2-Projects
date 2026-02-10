#include <stdio.h>

int main() {
printf("compare btw 2 nos");
    int num1, num2;
    int max;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;

    // Print the result
    printf("The larger number is: %d\n", max);

    return 0;
    }
