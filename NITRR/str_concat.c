#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // printf("Enter name :");
    // fgets(name , sizeof(name) , stdin);
    char name[20]={"hello "};
    char dest[20]={"world"};
    // strcat(name, dest);
    int i=strlen(name);
    int j=0;
    while(dest[j]!='\0'){
        name[i]=dest[j];
        j++;
        i++;
    }
    printf("%s\n", name);
    printf("%d\t%d", i, j);
return 0;
}