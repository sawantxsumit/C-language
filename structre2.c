#include <stdio.h>
#include <string.h>
struct student
{
	char name[100];
	int roll;
	float cgpa;
	
};

void printinfo(struct student s1);
int main() 
{
	struct student s1 = {"sumit" , 62 , 9.20};
//	printf("student name: %s", s1.name);
	
//	struct student *ptr;
//	ptr= &s1;
//	printf("student roll: %d\n", (*ptr).roll);//with pointer
	
//		printf("student roll: %d", ptr->roll);// arrow operator
printinfo(s1);

return 0;
}

void printinfo (struct student s1)
{
	printf("student information \n");
	printf("student name: %s\n", s1.name);
	printf("student roll: %d\n", s1.roll);
	printf("student cgpa: %f", s1.cgpa);
}
