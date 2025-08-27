#include<stdio.h>

int searchbig (int arr[], int size)
{
    int n=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>n)
        {
            n=arr[i];
        }
    }
      return n;
}

int main()
{
    int arr[10] = {22,3,234,5,3,5,345,455,34 , 6};
     
     printf("The elements in array are :");
     for (int i = 0; i < 10; i++)
     {
        printf(" %d ", arr[i]);
     }
      
     int res = searchbig(arr, 10 );

     printf("\nThe biggest element in the given array is %d ", res);
     
return 0;
}