#include<stdio.h>

// program to print the pascal's triangle

int main()
{
    int n;
    printf(" enter the number of stars :");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
       for(int j=0; j<=i; j++)
       {
           printf("%c %c ",3,4);
       }
       printf("\n");
    }
    for(int i=0; i<=n; i++)
    {
       for(int j=0; j<=i; j++)
       {
           printf("%c %c ",3,4);
       }
       printf("\n");
    }
for(int i=n; i>=1; i--)
    {
       for(int j=0; j<=i; j++)
       {
           printf("%c %c ",3,4);
       }
       printf("\n");
    }
    for(int i=0; i<=n; i++)
    {
       for(int j=0; j<=i; j++)
       {
           printf("%c %c ",3,4);
       }
       printf("\n");
    }
}