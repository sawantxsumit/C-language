#include<stdio.h>
#include<stdlib.h>
void change(int *a , int n)
{
    for (int i=0;i<n;i++){
        a[i]=a[i]*5;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    printf("Original array :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    change(a , 5);
    printf("\nArray after multiplication :");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    
    
return 0;
}