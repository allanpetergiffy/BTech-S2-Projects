//2. to find length of a string using build in function 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string = %lu\n", strlen(str));
    return 0;
}

