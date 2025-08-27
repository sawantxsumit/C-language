#include<stdio.h>

 int main()
{
   int a , b;

   a= 10;
   b= 12;
   a=  a+b;
   b= a-b;
   a= a-b;
   printf(" the swapped values of a= %d and b= %d ", a , b);
   return 0;
}