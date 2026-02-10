//1. find length of a string
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters until '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string = %d\n", length);
    return 0;
}

