#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=18, b=9, c,d,e=10,f;
    c=b++;
    d=b;
    a=++e;
    f=a>b>d<c;
    printf("%d", f!=1);
return 0;
}