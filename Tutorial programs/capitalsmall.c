#include<stdio.h>

void main()
{
    char ch;
    printf("enter an alphabet :");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122)
    {
        printf("capital is %c", ch-32);
    }
    else if(ch>=65 &&  ch<=90)
    {
        printf("%c", ch+32);
    }else printf("invalid output");
}