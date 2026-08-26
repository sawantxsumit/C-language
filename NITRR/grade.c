#include<stdio.h>
#include<stdlib.h>
int main()
{
    float marks;
    printf("Enter Marks :");
    scanf("%f", &marks);

    if (marks>=90)
    {
        printf("Grade A+");
    }
    else if (marks>=80)
    {
        printf("Grade A");
    }
    else if (marks>=70)
    {
        printf("Grade B");
    }
    else if (marks>=60)
    {
        printf("Grade C");
    }
    else if (marks>=40)
    {
        printf("Grade D");
    }
    else{
        printf("Grade E : Failed!");
    }


return 0;
}