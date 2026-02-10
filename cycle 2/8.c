#include <stdio.h>

int main()
{
    int a, b, c, d, e, total;
    float per;

    printf("Enter your marks: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    printf("Total marks = %d\n", total);

    per = total / 5.0;
    printf("Percentage = %.2f\n", per);

    if (per > 80 && per <= 100)
        printf("Grade: A+ \n");
    else if (per > 65 && per <= 80)
        printf("Grade: A \n");
    else if (per > 50 && per <= 65)
        printf("Grade: B \n");
    else if (per >= 42 && per <= 50)
        printf("Grade: C \n");
    else
        printf("Grade: Fail \n");

    return 0;
}
