#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    float marks;
    char grade;

    printf("Enter your age :");
    scanf("%d", &age);

    printf("Enter your marks :");
    scanf("%f", &marks);

    printf("Enter your grade :");
    scanf(" %c", &grade);

    printf("Age = %d\n", age);
    printf("Marks = %f\n", marks);
    printf("Grade = %c", grade);
return 0;
}