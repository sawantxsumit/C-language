#include<stdio.h>

void main()
{
    int num,sum=0,d=0;
    printf("enter a number :");
    scanf("%d",&num);

    for(; num>0 ;)
    {
       d=num%10;
       num=num/10;
       if(d%2==0)
       {
        sum=sum+d;
       }
    }printf("sum of even digits of a number is %d", sum);
}