#include<stdio.h>

int main()
{
    int arr[7] = {1,2,3,5,3,2,1};
    
    for(int i=0; i<=6; i++)
    {
        int flag =0;
        for(int j=i+1; j<=6; j++)
        {
           if(arr[i]==arr[j])
           {
            flag=1;
            break;
           }
        }
        if(flag==0)
        {
            printf("the unique element is %d", arr[i]);
            break;
        }
    }

    return 0;

}