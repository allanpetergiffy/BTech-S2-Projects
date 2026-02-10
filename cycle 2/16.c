#include<stdio.h>

 void main()
 { 
 int n,r,s,x;
 printf("armstrong number are:\n");
 printf("1 2 3 4 5 6 7 8 9 ");
 for(n=10;n<=1000;n++)
 {
 x=n;
 s=0;
 while(x!=0){
 r=x%10;
 s=s+r*r*r;
 x=x/10;
 }
 if(s==n)
 printf("%d\n",n);
 }
 }

