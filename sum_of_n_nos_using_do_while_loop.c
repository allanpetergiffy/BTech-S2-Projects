// sum_of_n_nos_using_do_while_loop

#include <stdio.h>
int main()
{
   int n,i=1,sum=0;
   printf("n:");
   scanf("%d",&n);
   do
   {
       sum=sum+i;
       i++;
   }
   while(i<=n);
   {
       printf("sum=%d",sum);
   }
    return 0;
}
