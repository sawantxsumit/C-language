#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n  , *ptr  , sum=0;
    printf("enter the number of elements :");
    scanf("%d", &n);

    ptr = realloc(ptr , 4);

    if (ptr== NULL)
    {
        printf("sorry ! unable to allocate memory ");
        exit(0);
    }

    printf("enter the elements of the array ;");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);
        sum+= *(ptr+i);
    }
    printf("sum = %d", sum);
    
    
return 0;
}