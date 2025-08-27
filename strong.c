#include<stdio.h>

int fact(int a)
{
    if(a==0) return 1;
    while(a>=1)
    {
        int factnm1= fact (a-1);
        int factn =factnm1 *a;
        return factn;
    }
}
int main ()
{
    //to check if a number is strong number or not
    int num,d=0,str=0;
    printf("enter a number :");
    scanf("%d", &num);
    int x= num;
    while(num>0)
    {
        d=num%10;
        num=num/10;
        str=str+fact(d);
    }
    if (x==str)
    {
        printf(" %d is a strong number ",x);
    }
    else
    {
        printf("%d is not a strong number ",x);
    }
}