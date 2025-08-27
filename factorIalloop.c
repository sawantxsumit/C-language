#include<stdio.h>

int main()
{
 int fact =1 , num;
  
 printf("enter a number :");
 scanf("%d", &num);

 if(num==0) fact = 1;
  else 
  {
   for (int i= 1; i <= num ; i++ )
   {
      fact = fact*i;
   }
   printf("\n factorial of %d is %d", num , fact);
    return 0;
  } 
}