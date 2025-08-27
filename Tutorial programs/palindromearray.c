#include<stdio.h>

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
       int arr[5]= {1,2,3,2,1};
    int brr[5];
    int flag;
    int j=0;
    for(int i=0;i<=4;i++)
    {
            if(arr[i]==arr[j])
            {
                flag =1;
            }
            else 
            {
                printf("not a palindrome");
                break;
            }
            j++;
    }
    if(flag==1) printf("palindrome ");
    else printf("not a palindrome");

    return 0;
}