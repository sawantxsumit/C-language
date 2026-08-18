#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10, b=30 , c=15,d=40,e=0;
    // d=b++;
    // printf("%d\n", d);
    // d=++a + ++a + b++;
    
    e= --a + b++ +c-- +d--;
    printf("%d\t%d\t%d\t%d\n",a, b,c,d);

    printf("%d", e);
return 0;
}