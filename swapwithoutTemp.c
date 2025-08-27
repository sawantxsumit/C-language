#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("enter first number :");
    scanf("%d", &a);
     printf("enter second number :");
    scanf("%d", &b);
    printf("numbers before swapping are %d and %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping are %d and %d", a, b);
return 0;
}