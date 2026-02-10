//Write a program to check whether enter year is leap or not(if…else)

#include<stdio.h>
 void main()
 {
 int year;
 printf("enter the year: ");
 scanf("%d",&year);
 if(year%100==0)
 { 
if(year%400==0)
 printf("leap year\n");
 else
 printf("not a leap year\n");
 }
 else
 {
if(year%4==0)
 printf("leap year\n");
 else
 printf("not a leap year\n");
 }
 }
