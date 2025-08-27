#include<stdio.h>

int main()
{
    int arr[4][2] = {76,80,77,88,78,90,79,66};
    for(int i=0; i<=3 ; i++)
{   
       for(int j=0; j<=1; j++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
    
    return 0;
}