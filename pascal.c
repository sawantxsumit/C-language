#include<stdio.h>

int main()
{
    int co =1, row=6;
    for(int i=0;i<row;i++)
    {
        for(int space =1; space<row;++space)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            if(j==0||i==0) co=1;
            else 
            {
                co=co*(i-j+1)/j;
                printf("%4d", co);
            }

        }
        printf("\n");
    }
    return 0;
}