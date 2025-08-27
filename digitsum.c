#include<stdio.h>
// to print the sum of digits of  number
void main()
{
    int n , d , sum=0, x;
    printf("enter a number :");
    scanf("%d", &n);
    x=n;
    for(int i=1; n!=0; i++)
    {
      
      d=n%10;
      n=n/10;
      sum=sum+d;
    }printf("sum of digits of %d is %d", x,sum);
}