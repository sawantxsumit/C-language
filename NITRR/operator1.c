#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=18 , b=9;
    int c=10,d=10,e=10;
    c=b++;
    d=b;
    printf("%d\n", a<b<c>d);
    printf("%d", c+1>e);

return 0;
}