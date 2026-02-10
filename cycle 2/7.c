//Write a program to find largest among three no using nested if statement

#include <stdio.h>

int main()
{
    int a, b, c, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            z = a;
        else
            z = c;
    }
    else
    {
        if (b > c)
            z = b;
        else
            z = c;
    }

    printf("Greater number is %d", z);

    return 0;
}

