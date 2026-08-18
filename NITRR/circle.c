#include<stdio.h>
#include<stdlib.h>
int main()
{
    float rad;
    float area;
    const float pi=3.14;
    printf("Enter radius of circle :");
    scanf("%f", &rad);
    area=pi*rad*rad;
    printf("Area of circle = %f", area);
return 0;
}