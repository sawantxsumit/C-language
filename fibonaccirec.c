#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
 //fibonacci series using recursion
  int n , i=0, res;
  printf("enter the number of terms :");
  scanf("%d", &n);
  printf("fibonacci series\n");

  for(int i=0 ; i<n ; i++)
  {
    res = fibonacci(i);
    printf("%d\t", res);
  }

  return 0;
}