#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a= 10, b=5,c;
    c=(a>b) && (a++);
    printf("%d\n", c);
    c=(a<b) || (a++);
    printf("%d\n", c);
    c= a-- && ++b;
    printf("%d", c);
return 0;
}