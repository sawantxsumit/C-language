#include<stdio.h>
#include<stdlib.h>
int main()
{
    int var=100;
    int *ptr=&var;
    int **ptr2= &ptr;
    printf("%d\n", var);
    printf("%d\n", *ptr);
    printf("%d\n", **ptr2);
    printf("%p\n", ptr2);
    printf("%p\n", *ptr2);
return 0;
}