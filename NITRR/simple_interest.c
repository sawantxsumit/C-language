#include<stdio.h>
#include<stdlib.h>
int main()
{
    float p , r ,t;
    printf("Enter principal amount :");
    scanf("%f", &p);
    printf("Enter years :");
    scanf("%f", &t);
    printf("Enter rate of interest :");
    scanf("%f", &r);
    float si= (p*r*t)/100;
    printf("Simple interest is : %f", si);
return 0;
}