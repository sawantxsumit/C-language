#include <stdio.h>

int linear(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 5, 34, 8, 45, 65, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 45;
    int result = linear(arr, n, target);
    if (result == -1)
    {
        printf("Element is not present in the array \n");
    }
    else
    {
        printf("The element is present at index %d", result);
    }
    return 0;
}