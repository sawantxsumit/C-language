#include<stdio.h>

//to delete an element in the array
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index;
    int size= sizeof(arr)/sizeof(arr[0]);
     
     printf("the original array is :");
     for (int i = 0; i < size; i++)
     {
        printf("%d\t", arr[i]);
     }
     printf("\n");
     
     printf("enter the index :");
     scanf("%d", &index);
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
     printf("the new array is      :");
     for (int i = 0; i < size; i++)
     {
        printf("%d\t", arr[i]);
     }
     printf("\n");
return 0;
}