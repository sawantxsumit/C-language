#include<stdio.h>

int main()
{
    int n , count = 0,k =0;
    printf("enter n :");
    scanf("%d", &n);

    for(int i=1; i<=n ; i++)
    {
        count =k;
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                printf("%d", count+i);
                count--;
                if(j!=i) printf("*");
                k++;
            }
            else 
            {
                count++;
                printf("%d", count);
                if(j!=i) printf("*");
                k++;
            }
        }
        printf("\n");
    }
return 0;
}