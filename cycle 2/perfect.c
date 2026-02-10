#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a perfect number\n");
        return 0;
    }

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("The number is a perfect number\n");
    else
        printf("The number is not a perfect number\n");

    return 0;
}
