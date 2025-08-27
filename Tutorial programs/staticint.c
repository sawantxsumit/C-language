#include<stdio.h>

void print(void);

int main()
{
    printf("\n first call of print()");
    print();
    printf("\n second call of print()");
    print();
    printf("\n third call of print()");
    print();
    return 0;
}

void print()
{
    static int x=0;
    int y =0;
    printf("\n static integer variable , x =%d", x);
    printf("\n integer variable , y= %d", y);
    x++;
    y++;
}