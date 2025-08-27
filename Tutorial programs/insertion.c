#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int insert(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {1, 23, 55, 3, 77};
    int size = 4, index = 3, element = 45;

    display(arr, size);
    insert(arr , size , element, 100, index);
    size++;
    display(arr , size);
    return 0;
}
