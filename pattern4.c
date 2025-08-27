#include<stdio.h>

int main()
{
 for(int i=1;i<=10;i++)
 {
    for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    for(int k=19;k>=(i*2-1);k--)
    {
        printf(" ");
    }
    
     for(int j=1;j<=i;j++)
    {
        printf("*");
    }
       printf("\n");
 }   
}