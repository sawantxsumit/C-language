#include<stdio.h>

int main()
{
    int n , s , e;
    printf("enter a number :");
    scanf("%d",&n);
    printf("enter starting and ending term :");
    scanf("%d%d", &s, &e);
    if(e>s)
    {
        while(s<=e)
        {
            printf("\n %d*%d= %d", n , s , n*s);
            s++;
        }
    }
    else
        {
            while(e<=s)
            {
                printf("\n %d*%d= %d", n , e , n*e);
                e++;
            }
        }
    
    return 0;
}