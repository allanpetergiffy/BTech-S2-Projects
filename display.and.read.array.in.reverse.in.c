//display.and.read.array.in.reverse.in.c
#include <stdio.h>

int main() {
    int n,A[20],i;
    printf("size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements: ");
        scanf("%d",&A[i]);
    }
    printf("\n\n The array is \n");
    for(i=n-1;i>=0;i--)
    {
        printf("\t%d",A[i]);
    }
}
