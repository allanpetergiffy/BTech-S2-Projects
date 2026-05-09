// to find fact
#include <stdio.h>
long factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int num;
    printf("enter no:");
    scanf("%d",&num);
    printf("factorial of %d is %ld",num,factorial(num));
    return 0;
}
