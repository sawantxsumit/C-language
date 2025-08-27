#include <stdio.h>
#include <string.h>
typedef struct student
{
	char name[100];
	int roll;
	float cgpa;
	
}stu;

typedef struct computerengineeringstudent
{
	char name[100];
	int roll;
	float cgpa;
}ces;
int main() 
{
	ces s1 = {"sumit ", 55, 9.55};
	printf("student name: %s \nstudent roll:%d\nstudent cgpa :%f \n ", s1.name , s1.roll , s1.cgpa);
}
