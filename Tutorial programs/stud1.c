#include<stdio.h>
#include<conio.h>

struct student
{
    int roll;
    char name[20];
    char course[4];
}stud[3];


int main()
{
    int i=0,count=0;
    char ch;
    printf("this is a program to store the data of students ");
    do
    {
    printf("\nEnter student' name :");
    gets(stud[i].name);
    printf("\nEnter students roll number :");
    scanf("%d", &stud[i].roll);
    printf("Enter student's course :");
    gets(stud[i].course);
    printf("\n To input another student's information enter a\n To exit enter b \n");
    scanf("%c",&ch);
    count++;
    if (ch!='a' && ch!='A' && ch!='b' && ch!='B')
    {
        printf("invalid input!");
    } 
    i++;
    }
    while(ch=='a' || ch=='A');

    for(int i=0;i<=;i++)
{
    printf("\n Roll number = %d",stud[i].roll);
     printf("\n student's name = %s",stud[i].name);
      printf("\n Student's course = %s",stud[i].course);
}
    return 0;
}