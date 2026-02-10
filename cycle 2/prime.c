#include <stdio.h>

int main() {
printf("prime or not\n");
    int n, i, flag=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    for (i=2; i*i <= n; i++) {
        if (n % i == 0) {
            flag=0;
            break;
        }
    }

    if (flag==1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
