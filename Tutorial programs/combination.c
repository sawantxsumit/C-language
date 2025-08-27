#include<stdio.h>

int fact(int n)
{
    int fac=1;
   
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    return fac;
}
int combination(int n, int r)
{
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r)
{
    int npr= fact(n)/fact(n-r);
    return npr;
}
int main()
{
    int n ,r;
    printf("enter the value of n :\n");
    scanf("%d",&n);
    printf("enter the value of r :\n");
    scanf("%d",&r);
    int x=combination(n,r);
    printf("the value of combination for given values is %d\n",x);
    int y= permutation(n,r);
    printf("the value of permutation for the given values is %d\n", y);
    for(int i=1;i<=20;i++)
    {
        printf("%c %c ", 3,4);
    }
    return 0;
}