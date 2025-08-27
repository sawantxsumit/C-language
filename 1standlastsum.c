#include<stdio.h>
 int main()
 {
    int num , x , sum ;
    printf("enter a number :");
    scanf("%d", &num);
    int d;
    d = num% 10;
    x  = d;
    while(num >0)
    {
        d= num%10;
        num = num /10;
    }printf("the sum of first and last digit is %d", x + d);

     return 0;
 }