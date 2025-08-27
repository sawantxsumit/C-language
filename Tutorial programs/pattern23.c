#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=2;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j>0; j--)
        {
            printf("%d " , n++);   
        }
        printf("\n");
    }
    
return 0;
}
