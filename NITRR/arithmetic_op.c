#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a ;
    int b;
    int c=5,d=6;
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);

    printf("Addition : %d\n", a+b);
    printf("Subtraction : %d\n", a-b);
    printf("Multiplication : %d\n", a*b);
    printf("Division : %d\n", a/b);
    printf("%d\n", c+d-a*b);
    // modulus operator doesnt work on float data type 
    // printf("modulus (reminder) : %d\n", a%b);
return 0;
}