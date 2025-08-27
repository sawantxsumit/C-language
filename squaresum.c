#include<stdio.h>
#include<math.h>
int sum(int n);
void main() 
{
   int num;
   printf("enter a number :");
   scanf("%d", &num);
   printf("the sum of square of given natural  numbers is :%d",sum(num));	
}
int sum(int n)
{
    int sqsum=0;
	for(int i=1 ; i<=n ; i++)
	{
	  	
	  	sqsum= sqsum+(i*i);

	}
  return sqsum;
}
