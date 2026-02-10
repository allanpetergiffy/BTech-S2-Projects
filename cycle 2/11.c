//    11. Write a program in c to print sum of odd no between 0 to 10 using continue.

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;

        printf("%d\n", i);
        sum = sum + i;
    }

    printf("Sum of odd numbers is %d", sum);

    return 0;
}

