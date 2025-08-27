#include<stdio.h>

int fibonacci(int n);

int main()
{
    int a;
    printf("enter the number of terms :");
    scanf("%d", &a);
int i=0;
while (i<=a)
{
   printf("%d\t", fibonacci(i));
   i++;
}

    
    return 0;
}

int fibonacci(int a)
{
    if(a==0) return 0;
    if (a==1) return 1;

    int fib= fibonacci(a-1) + fibonacci(a-2);

    return fib;
}