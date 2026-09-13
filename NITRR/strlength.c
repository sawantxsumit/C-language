#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter name :");
    fgets(name , sizeof(name) , stdin);
    // int len;
    // len= strlen(name);
    // printf("%d", len);
    int i=0;
    while (name[i]!='\0')
    {
        // printf("%c", name[i]);
        i++;
    }
    printf("length is : %d" ,i );
    
return 0;
}