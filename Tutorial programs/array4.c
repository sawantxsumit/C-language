#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {9,8,7,6,5};
    //to find the second maximum value
    int max = INT_MIN,smax;
    for(int i=0 ; i<=4 ;i++)
    {
    if(max<arr[i])
    {
        smax=max;
        max=arr[i];
    }
    else if(smax<arr[i] && max != arr[i])
    {
        smax=arr[i];
    }
    }
    printf("%d", smax);
    return 0;
}