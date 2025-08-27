#include<stdio.h>

int main()
{
	int n;
	printf("enter a number :");
	scanf("%d", &n);
	for (int i=0 ;i<=n ; i++)
	{
		if(n==0)
		{
		    return 0;	
		}
		if (n==1)
		{
			return 1;
		}
	int n1 = n-1+i;
	int n2 = n-2+i;
	printf("the fib number is %d \n ", n1+n2);
	}
}
