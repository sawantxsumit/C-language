#include<stdio.h>

int main()
{
    int n; // static memory i.e. the memory is  allocated during compile time 
    printf("enter array size :");
    scanf("%d", &n);
    int arr[n];//dynamic memory i.e. the memory is allocsted during the run time 
    for(int i=0 ;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    for(int i=0 ;i<n;i++)
    {
      printf("%d ", arr[i]);
    }
    return 0;
}