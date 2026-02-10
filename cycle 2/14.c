//14. Write a program in c to check whether the no is prime or not

#include <stdio.h>

int main() {
    int n, i;
printf("Write a program in c to check whether the no is prime or not\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime");
        return 0;
    }

    for (i = 2; i < n; i++)
        if (n % i == 0) {
            printf("Not prime");
            return 0;
        }

    printf("Prime");
    return 0;
}



