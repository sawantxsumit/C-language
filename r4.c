#include<stdio.h>

int main()
{
    int d=1 ,sum=0,n=1;
while(n<=2000)
{
    while(n>0)
    {
      if(n%d==0)
      {
        sum=sum+d;
        d++;
      }
         
    }
        if(sum==n)
    {
        printf("\n%d", sum);
    }
    n++;
}
    return 0;
}
