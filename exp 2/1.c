// 1 to read & display an array
 #include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("1. Read and Display an Array\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

