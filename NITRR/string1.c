#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
int main()
{
    char name[30];
    printf("Enter name :");
    // gets(name);
    fgets(name,sizeof(name), stdin);
    printf("%s",  name);
return 0;
}