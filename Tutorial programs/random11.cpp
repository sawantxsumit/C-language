#include<stdio.h>

int main()
{
   int n;

   printf("enter no of terms :");
   scanf("%d", &n);

   for (int i=4 ; i<=3*n+1 ; i= i+3)
   {
    printf("%d \t", i);
   }
   return 0;
}
