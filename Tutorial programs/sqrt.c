#include<stdio.h>
#include<math.h>
int add(int a, int b)
{
    printf("enter first number :");
    scanf("%d", &a);
     printf("enter second number :");
    scanf("%d", &b);
    printf("the sum the given two numbers is %d", a+b);
    return 0;
}
float cube(int a)
{
    printf("enter a number :");
    scanf("%d", &a);
    printf("\ncube root is %f", cbrt(a));
    return 0;
}
float root(float a)
{
    printf("enter a number :");
    scanf("%f", &a);
    printf("the square root of %f is %f", a, sqrt(a));
    return 0;
}
int diff(int a , int b)
{
     printf("enter first number :");
    scanf("%d", &a);
     printf("enter second number :");
    scanf("%d", &b);
    printf("the difference between the given two numbers is %d", a-b);
    return 0;
}
int pro(int a , int b)
{
     printf("enter first number :");
    scanf("%d", &a);
     printf("enter second number :");
    scanf("%d", &b);
    printf("the product the given two numbers is %d", a*b);
    return 0;
}
int div(int a, int b)
{
     printf("enter first number :");
    scanf("%d", &a);
     printf("enter second number :");
    scanf("%d", &b);
    printf("the quotient is %d", a/b);
     printf("\nthe remainder is %d", a%b);
    return 0    ;
}
float power (float a , float b)
{
    printf("enter base number :");
    scanf("%f", &a);
    printf("enter power :");
    scanf("%f",&b);
    printf("%f to the power of %f is %f", b,a, pow(a,b));
    return 0;
}

int main()
{

    printf("THIS IS A PROGRAM TO FIND :- \n-> CUBE ROOT\n-> SQUARE ROOT\n-> ADDITON OF 2 NUMBERS\n-> SUBTRACTION OF TWO NUMBERS\n");
    printf("-> PRODUCT OF TWO NUMBERS\n-> DIVISION (qoutient and remainder both)\n");
    printf("IF you want to find CUBE ROOT enter c\n");
    printf("if you want to find sqaure root enter s\n");
    printf("if you want to find sum of two numbers enter a\n");
    printf("if you want to find difference between two numbers enter m\n");
    printf("if you want to find product enter p\n");
    printf("if you want to divide two numbers enter d\n");
    printf("if you want to find the power of one number to the other enter w");
    char input;
    int a, b;
    printf("\nenter a character:");
    scanf("%c", &input);
    if(input=='c') 
    {
        cube(a);
    }
    else if(input=='s')
    {
       root(a);
    }
    else if(input=='a')
    {
        add(a,b);
    }
    else if(input=='m')
    {
        diff(a,b);
    }
    else if(input=='p')
    {
        pro(a,b);
    }
    else if(input=='d')
    {
        div(a,b);
    }
    else if(input=='w')
    {
        power(a,b);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}