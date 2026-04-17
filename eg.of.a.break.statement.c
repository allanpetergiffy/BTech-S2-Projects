// eg.of.a.break.statement.c

#include <stdio.h>
int main()
{
   
   int i;
   for (i=0;i<10;i++)
   {
       printf("%d\t",i);
       if(i==5)
    {
        break;
     }
   }
     printf("\nCame out with i=%d",i);
   
}
