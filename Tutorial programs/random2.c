#include<stdio.h>
#include<math.h>
int main()
{
   int n;

   printf("enter a number :");
   scanf("%d", &n);
   int a=0;
   for(int i=2; i<=n-1 ; i++)
   {
      if (n%i==0)
      {
         a++;
         break;
      }
   }if(a==0)
   {
      printf("the given no is prime ");
   }else {
      printf("the given no is composite");
   }
   return 0;
}