#include<stdio.h>
#include<stdlib.h>

int swap_by_reference(int *a ,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d", &a,&b);

    //Swap by value
    printf("Original value : a=%d b=%d", a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping by value a=%d b=%d", a,b);

    // swap by reference
    swap_by_reference(&a,&b);
    printf("\nSwapping with reference\n value after swapping a=%d b=%d", a,b);
return 0;
}