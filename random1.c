#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , element , index;
    printf("enter the size of the array :");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("enter the new element :");
    scanf("%d", &element);

    printf("enter the index :");
    scanf("%d", &index);
    
    if(index>n)
    {
        printf("value of index is not acceptable ");
        exit(0);
    }
    for (int i = n; i >index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    n++;
    printf("array after insertion \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    
return 0;
}