#include<stdio.h>

int main()
{
    int star,n=1;
    printf("enter number of rows :");
    scanf("%d", &star);

    for(int i=1;i<=star;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",n);
            n++;
        }
        printf("\n");
        
    }
}