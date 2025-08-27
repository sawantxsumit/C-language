#include<stdio.h>

int reverse(int arr[], int a, int b)
{
    for(int i=a,j=b; i<=j ; i++, j--)
    {
        // only reverse the index from a to b 
        // a = starting index and b = ending index
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
    }
    return 0;
}
int main()
{
    int arr[8]= {1,2,3,4,5,6,7,8};
    int n= sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    int k; 
    printf("enter the value of k :");
    scanf("%d", &k);
    if (k>n-1)
    {
        k= k%(n-1);
    }
   reverse(arr, 0 , n-1);
   reverse(arr, 0 , k-1);
   reverse(arr, k , n-1);
   for(int i=0; i<=n-1 ; i++)
   {
    printf("%d ", arr[i]);
   }
    return 0; 
}