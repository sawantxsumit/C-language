#include <stdio.h>
int fib(int n);
// program to find the fibonacci number 
int main() 
{
	int num;
	printf("enter the term :");
	scanf("%d", &num);
	for(int i=0; i<=num; i++)
	{
 printf("%d\t",fib(i));
	}
   
	return 0;
}
int fib(int n) 
{
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	int fibn = fib(n-1) + fib(n-2);
//	printf(" the fib of %d is : %d \n", n ,fibn);
	return fibn;
}
