#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
       int arr[5]= {1,2,3,4,5};
    int brr[5];
    int j=0;
    for(int i=0;i<=4;i++)
    {
        brr[i]=arr[4-i];    
    }
    
    for(int i=0;i<=4;i++)
    {
        printf("%d ", arr[i]);
        
    }
    printf("\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d ", brr[i]);
    }
    // int flag=0;
    // for (int i = 0; i <= 4; i++)
    // {
    //     if(arr[i]==brr[i])
    //     {
    //         flag =1;
    //     }
    //     else flag =0;    
    // }
   
    // if(flag==1) printf("\npalindrome");
    // else printf("\nnot a palindrome");
    return 0;
}