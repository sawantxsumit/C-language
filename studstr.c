#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
    char course[4]; 
}stud[3];

int main()
{
    printf("Enter student details \n");
    for(int i=0;i<=0;i++)
    {
    printf("\nEnter student's roll number :");
    scanf("%d",&stud[i].roll);
    printf("\n Enter student's name :");
    gets(stud[i].name);
    //scanf("%s",&stud[i].name);
    printf("\n Enter student's course :");
    gets(stud[i].course);
    }
for(int i=0;i<=0;i++)
{
    printf("\n Roll number = %d",stud[i].roll);
     printf("\n student's name = %s",stud[i].name);
      printf("\n Student's course = %s",stud[i].course);
}
    return 0;
}