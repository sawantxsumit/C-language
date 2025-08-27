#include<stdio.h>
#include<stdlib.h>
void delete(int arr[], int index , int size)
{
    if(index>size)
    {
       printf(" the value of index is greater than the size of array ");
       exit(0);
    }
    for (int i = 0; i < size; i++)
    {
        if(i>=index)
        {
            arr[i]=arr[i+1];
        }
        else continue;
    }
    
}

int main()
{
    int index  , size=5;
    int arr[5] = { 1 , 2 ,3 , 5, 6};
    
    printf("the original array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    
    printf("\nenter the index :");
    scanf("%d", &index);

    delete (arr , index , size);
    size--;
     printf("the new array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
return 0;
}