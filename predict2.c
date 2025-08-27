#include<stdio.h>

void main()
{
    // to swap the value of two varaiables
    int a , b , x;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("values before swapping a=%d , b=%d", a, b);
    x=a;
    a=b;
    b=x;
    printf("\nvalues after swapping a=%d , b=%d", a, b);

}
