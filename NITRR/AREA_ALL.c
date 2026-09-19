#include<stdio.h>
#include<stdlib.h>

float circle(float radius){
    return 3.14*radius*radius;
}

int square(int a){
    return a*a;
}

float triangle(float h, float b){
    return 0.5*h*b;
}
int main()
{
    printf("Enter radius of circle :");
    float r;
    scanf("%f", &r);
    printf("Area of circle is : %f", circle(r) );

    printf("\nEnter side of square :");
    int a;
    scanf("%d", &a);
    printf("Area of square is : %d", square(a) );

    float h,b;
    printf("\nEnter height of triangle :");
    scanf("%f", &h);
    printf("\nEnter base of triangle :");
    scanf("%f", &b);
    printf("Area of triangle is : %f", triangle(h,b) );
    
return 0;
}