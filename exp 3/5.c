//5. cancat two strings without using string handiling function
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Copy str2 into str1
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';  // terminate final string

    printf("Concatenated string: %s\n", str1);
    return 0;
}

