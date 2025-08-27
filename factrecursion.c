#include<stdio.h>

int factorial(int n);
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d", &a);

    printf("the factorial of %d is %d", a , factorial(a));
    return 0;
}

int factorial(int n)
{
    if(n==0){
        return 1;
    }

    int factnm1= factorial(n-1);
    int factn= factnm1 * n;
    return factn;
}