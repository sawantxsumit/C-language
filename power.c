#include<stdio.h>

void main()
{
    int a , b , power=1;
    printf("enter base number :");
    scanf("%d", &a);
    printf("enter the power :");
    scanf("%d", &b);

    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }printf("\n%d to the power of %d is %d",b,a,power);
}
