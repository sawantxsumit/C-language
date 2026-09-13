#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    printf("Enter array elements :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements :\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    // int b[5];
    // b[5]=5;
    // printf("%d", b[5]);
return 0;
}