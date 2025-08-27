#include<stdio.h>

int main()
{
    // for(int r=0; r<=5; r++)
    // {
        
    //   for(int h=0; h<=5-r ; h++)
    //   {
    //     printf(" ");
    //   }
    //     for(int c=0; c<=r; c++)
    //     {
    //       printf("* ");
    //     }
    //     printf("\n");
    // }
    for(int i=1; i<=10 ;i++)
    {
        for(int j=i;j<=10;j++)
        {
            printf("*");
        }
        for(int k=1;k<=(i*2-1); k++)
        {
            printf(" ");
        }
        for(int j=i;j<=10;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
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