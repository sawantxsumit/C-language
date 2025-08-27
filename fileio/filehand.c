#include<stdio.h>

int main()
{
    FILE* ptr= fopen("sumit.txt", "r");
    char ch[100];
    while(fgets(ch,100,ptr) != NULL)
    {
    printf("%s", ch);
    }
    // FILE* ptr2 = fopen("test.txt", "w");
    // char cha[] ="today is monday tommorow is tuesday";
    // fputs(cha, ptr2);
    // fclose(ptr2);
}