#include<stdio.h>

void main()
{
    //to print the reverse of a number
    int num,rev=0;
    printf("enter a number :");
    scanf("%d", &num);

    while(num>0)
    {
        rev=rev+ (num%10);
        rev=rev*10;
        num=num/10;
    }
    printf("the reverse of the given no is %d", rev/10);

}