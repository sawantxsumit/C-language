#include<stdio.h>


int main()
{
    int n , arr[n] ;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n ; i >0; i--)
    {
         arr[i]=arr[i-1];
    }

    printf("Enter the new element :");
    scanf("%d", &arr[0]);

    n++;

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
return 0;
}