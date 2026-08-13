#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d", &a,&b,&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the biggest",a);
        }
        else{
            printf("%d is the greatest", c);
        }
    }
    else 
        {
            if (b>c)
                {
                    printf("%d is greatest",b);
                }       
                else{
                    printf("%d is the greatest", c);
                }
        }   


    // if (a==b && b==c)   
    // {
    //     printf("All numbers are equal");
    // }
    // else if (a>=b && a>=c)
    // {
    //     printf("%d is the greatest number", a);
    // }
    // else if (b>=a && b>=c)
    // {
    //     printf("%d is the greatest number", b);
    // }
    // else
    // {
    //     printf("%d is the greatest number", c);
    // }
    
return 0;
}