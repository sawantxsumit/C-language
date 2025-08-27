#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {4,5,4,1,2};
    int max = INT_MIN;
    int smax= INT_MIN;
    for(int i=0; i<=4; i++)
    {
        if(max<arr[i])
        {
            max= arr[i];
        }
    }
     for(int i=0; i<=4; i++)
    {
        if(smax<arr[i] && arr[i] != max )
        {
            smax= arr[i];
        }
    }
    printf("the largest element in array is %d", max);
    printf("\nthe second largest element in array is %d", smax);
    return 0;
}