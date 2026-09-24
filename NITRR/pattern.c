#include<stdio.h>
#include<stdlib.h>
int main()

{
    //pattern 1
    for (int i = 0; i < 6; i++)
    {
        for (int J = 0; J < i; J++)
        {  
            printf("*");
        }
        printf("\n");
        
    }
    //pattern 2
    for (int i = 1; i <5; i++)
    {
        for (int j = 4; j >i ; j--)
        {
            printf(" ");

        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ", i);
        }
        

        printf("\n");
    }

    // pattern 3
    int n=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",n);
            n++;
        }
        n=1;
        printf("\n");
        
    }

    //pascal triangle

    
    
    
return 0;
}