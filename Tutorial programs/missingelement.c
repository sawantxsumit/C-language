#include<stdio.h>

int main()
{
    int arr[100];
    for(int i=1, j=0;i<=100, j<=99; i++ ,j++ )
    {
        arr[j] = i;
    printf("%d ", arr[j]);
    }
    int sum=0;
    arr[9] = 0;
        for(int i=0; i<=99; i++)
    {
        sum= sum+ arr[i];
    }
    printf("\n the sum of all elements of the array is %d\n", sum);
    int flag= 0;
    int x;
    if(sum!=5050) 
    {
        x= 5050 - sum;
    }
    for(int i = 0; i<= 99; i++)
    {
        if(arr[i]=x)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is not present in the array", x);

    }
    else{
        printf("%d is present in the array", x);
    }
    return 0;
}