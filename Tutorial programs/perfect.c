#include<stdio.h>
//to print perfect number between 1 and 2000

int main()
{
 int sum;
 for(int i=1;i<=2000;i++)
 {
    sum=0;
    for(int j=1;j<=i/2;j++)
    {
        if(i%j==0) 
        {
            sum=sum+j;
        }
    }
     if(sum==i) printf("%d\n", sum);
 }
 return 0;
}