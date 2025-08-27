#include<stdio.h>
int main()
{
    int n,fact=1, x;
    printf(" enter a number :");
    scanf( "%d",& n);
    x=n;
    while( n>1)
    {
        fact=fact*n;
        n--;
    }
    printf("the factorial of %d is %d",x,fact);
    


}