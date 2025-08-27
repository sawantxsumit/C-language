#include<stdio.h>

void main()
{
    char ch;
    printf("enter a character :");
    scanf("%c", &ch);

    if(ch>=97)
    {
        printf("upper case %c", ch-32);
    }else 
    {
        printf("lower case %c", ch+32);
    }
}