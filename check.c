#include<stdio.h>
#include<ctype.h>
int main ()
{
    char alpha;
    printf("enter an alphabet :");
    scanf("%c", &alpha);
    if (islower(alpha))
   putchar(toupper(alpha));
    else 
    printf("%c", tolower(alpha));

    
}