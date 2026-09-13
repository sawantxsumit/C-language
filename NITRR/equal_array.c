#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    int b[5];
    printf("Enter values of array 1: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter values of array 2: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }


    printf("Comparing arrays ........\n");
    for (int i = 0; i < 5; i++)
    {
        if (a[i]!=b[i])
        {
            printf("Uneqal array");
            break;
        }        
    }


    
    // int count=0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (a[i]==b[j])
    //         {
    //             count++;
    //         }  
    //     }
    // }

    // if (count==5)
    //     printf("Both Arrays are equal");
    // else
    //     printf("Number of equal elements : %d", count);

    
    
return 0;
}