//calculating simple interest
#include <stdio.h>

int main()

{
      printf("Hello,Welcome\n");
    int p,r,t;
    float si;
    printf("enter the principal, rate and time\n"    );
    scanf("%d %d %d",&p,&r,&t);
    si = p*r*t /100;
  printf("principal: %d \nrate:%d \ntime: %d \n",p,r,t);
    printf("simple interest: %f\n", si);
    return 0;

 
}
