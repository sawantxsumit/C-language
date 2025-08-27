#include<stdio.h>

int main()
{
    int n , d=1 ,sum=0;
   // clrscr();
    printf("enter a number :");
    scanf("%d", &n);

    while(d<=n)
    {
      if(n%d==0)
      {
        printf("%d\t", d);
        sum=sum+d;
        d++;
      }
    } 
if(sum==n)
    {
        printf("%d is a perfect number", n);
    }

    return 0;
}
