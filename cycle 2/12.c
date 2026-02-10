// Write a program in c using goto statement.

#include<stdio.h>
 int main()
 { 
 int n;
 printf("enter a number: ");
 scanf("%d",&n);
 if(n%2==0)
 goto even;
 else
 goto odd;
 odd:printf("odd number");
 goto end;
 even:printf("even number");
 goto end;
 end:
 }
