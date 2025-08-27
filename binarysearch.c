#include<stdio.h>

int binarysearch(int arr[], int size , int key)
{
    for (int i = 0; i < size; i++)
    {
        int s=0;
        int e=size;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]>key)
            {
                e=mid-1;
            }
            else s=mid+1;
        }
        return -1;

    }
    
}

int main()
{
   int n;
   printf("enter the size of array :");
   scanf("%d", &n);

   int arr[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }
   
   int key;
   printf("\nenter the key element :");
   scanf("%d", &key);
    
    printf("%d", binarysearch(arr, n, key));
return 0;
}