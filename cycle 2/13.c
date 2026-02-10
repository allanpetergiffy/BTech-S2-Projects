//13. Write a program to find Fibonacci series up to n terms

#include<stdio.h>

int main()
 {
 int n,i,a=-1,b=1,c;
 printf("enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
c=a+b;
 a=b;
 b=c;
 printf("%d",c);
 }
   }
