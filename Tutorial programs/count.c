#include<stdio.h>

void main()
{
    long int n , d;
    int count=0;
    printf("enter a number :");
    scanf("%d", &n);

    for(;n>0;)
    {
        d=n%10;
        n=n/10;
        count++;
    
        if(n==0) break;
    }printf("no of digits is %d", count);
}