#include<stdio.h>

int main()

{
   int n , a ,d;
   printf("enter a number :");
   scanf("%d", &n);

   while(n>=1)
   {
   // d=n;
    
    a=d*n;
    n--;
   }
   printf("the factorial of %d is %d", n,a);
}