#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b=12;
    int c=10;
    int a=b&c;
    printf("AND %d\n", a);
    a=b|c;
    printf("OR %d\n", a);
    a=b^c;
    printf("XOR %d\n", a);
    a=5>>2;
    printf("RIGHT SHIFT %d\n", a);
    a=5<<2;
    printf("LEFT SHIFT %d\n", a);

    
return 0;
}