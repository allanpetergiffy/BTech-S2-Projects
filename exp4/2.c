//2.c tevese a string (without string handling function)

#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    int len = 0;
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Reverse using for loop
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

