#include<stdio.h>

void main()
{
     long int n,d;
     int count=0;
    printf("enter a number :");
    scanf("%ld", &n);

    for(;n>0;)
    {
        n=n/10;
        count=count+1;
         d=n%10;
        if(n==0) break;
    }printf("no of digits is %d",count);
}