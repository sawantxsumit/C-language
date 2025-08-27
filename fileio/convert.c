#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE* ptr1,*ptr2;
    char ch;

    ptr1=fopen("sumit.txt","r");
    ptr2=fopen("text1.txt", "w");

    if(ptr1== NULL || ptr2== NULL)
    {
        printf("\n error opening files");
        return 0;
    }

    while((ch=fgetc(ptr1)) != EOF)
    {
        if(isupper(ch))
        {
           ch= tolower(ch);
        }
        else if(islower(ch))
        {
            ch= toupper(ch);

        }
        fputc(ch,ptr2);
    }
    printf("\ncase conversion succesful ");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}