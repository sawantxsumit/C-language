#include<stdio.h>

int main()
{
    // program to check whether the entered number is palindrome or not
    int n , x=0 , r=0,d=0;
    printf("enter a number :");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(x==r) printf("the given number is a palindrome");
    else printf("not a palindrome");
    return 0;
}
