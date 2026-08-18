#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10, b=8,c=12;
    a=++c;
    printf("%d\t%d\t%d\t",a, b,c);
    c=c++;
    printf("%d\t%d\t%d\t",a, b,c);
    b=++a;
    printf("%d\t%d\t%d\t",a, b,c);
    b=c++;
    printf("%d\t%d\t%d\t",a, b,c);
    a=++c;
    printf("%d\t%d\t%d\t",a, b,c);

    
return 0;
}