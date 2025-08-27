#include<stdio.h>

int main()

{
    float area , rad;
    const float pi= 3.14;
    printf("enter the radius :");
    scanf("%f", &rad);

    area= pi*rad*rad;

    printf("the area of the circle is %f ", area);

}