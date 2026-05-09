// to find sum of even and odd elements
#include <stdio.h>


void findSum(int arr[],int size)
{
    int evenSum= 0 , oddSum = 0 ;
    for (int i=0; i<size ; i++)
    {
        if (arr[i] % 2 == 0 ) evenSum+=arr[i];
        else oddSum+= arr[i]; 
    }
    printf("even sum: %d, Odd sum: %d", evenSum,oddSum);
}
 void main ()
 {
     int n , a[50], i;
     printf("Enter size: ");
     scanf("%d",&n);
     printf("enter elements: ");
     for(i=0 ; i<n ; i++)
     {
         scanf("%d",&a[i]);
     }
     findSum(a,n);
 }
