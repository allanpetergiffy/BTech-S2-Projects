// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
   int n,sum=0,temp,org,count=0;
   printf("What is an Armstrong no\n First of all, we must know the definition of Armstrong number. So, in order to know about it let N be any number. Determine how many digits are in the number. Let us assume that it is n. now take each digit in the number and raise it to the n power. After calculating the 
 power of each digit add all of them. If we get the sum as the original number then the original number is called Armstrong number");
   printf("Enter no:");
   scanf("%d",&n);
   org=n;
   while(n>0)
   {
      count++;
      n=n/10;
       
   }
    n=org;
    while(n>0)
    {
        temp=n%10;
        sum=sum+ pow(temp,count);
        n=n/10;
    }
   if (org==sum){
       printf("Armsrong");
   }
   else{
   printf("not Armstrong");}
  }
