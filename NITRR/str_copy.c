#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter name :");
    fgets(name , sizeof(name) , stdin);
    char dest[40];
    // strcpy(dest , name);
    int i=0;
    while(name[i]!='\0'){
        dest[i]=name[i];
        i++;
    }
    printf("%s", dest);
return 0;
}