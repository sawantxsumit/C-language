#include <stdio.h>

void display(int arr[] , int size)
{
   for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
int insert(int arr[], int size , int index , int element , int capacity)
{
    if(index>=capacity)
    {
        return -1;
    }
    size= sizeof(arr) / sizeof(arr[0]);

    //int arr2[size + 1];

    for (int i = size-1; i >= 0; i--)
    {
        if(i==index)
        {
            arr[i]= element;
        }
         else arr[i+1] = arr[i];
    }
   return 0;
}

int main()
{
    int arr[8] = {1, 2, 3, 54, 6, 4, 23, 5};
      int size= sizeof(arr) / sizeof(arr[0]);

    //int arr2[9];
    int index, num;
    printf("enter the index :");
    scanf("%d", &index);
    printf("enter the number :");
    scanf("%d", &num);
    
    if(insert==-1)
    {
        printf("the given index is greater than the size of the array \n the insertion cannot be done \n");
    }
    
    display(arr, size);
    size++;
    display(arr, size);
    return 0;
}

// wap to insert an element on the location given by the user