#include<stdio.h>

void main()
{
    // to print nth term in fibonacci series
    int num, fib=0 , a=1 , b=1;
    printf("enter number of terms :");
    scanf("%d", &num);

    for(int i=1; i<=num-2 ; i++)// here num-2 is written cuz the output shows the value of the term which is 2 terms ahead of the give number by uses
    {
        fib=a+b;
        a=b;
        b=fib;
    }printf("\n%dth term of the fibonacci series is %d",num, fib);
}
/* fib = a+b = 0+1 =1
a=b=1
b=fib=1

next loop
fib = 1+1=2
a=b=1
b=fib =2

and so on
*/ 
