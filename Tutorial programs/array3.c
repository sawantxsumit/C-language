#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {1,4,6,3,9};
    int max= INT_MIN;
    for(int i=0; i <=4; i++)
    {
    if (max<arr[i])
    {
        max= arr[i];
    } 
    }
    printf("%d", max);
    return 0;
}