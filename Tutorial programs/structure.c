#include <stdio.h>
#include <string.h>
struct student 
{
	char name[100];
	int roll;
	float cgpa;
	
};
int main() 
{
	struct student s1;
	 s1.roll = 62;
	 s1.cgpa= 9.20;
	 strcpy(s1.name , "sumit");
	 
	 printf("student name :%s \n",s1.name );
	 printf("student roll no. :%d\n", s1.roll);
	 printf("student's cgpa : %f \n \n ", s1.cgpa);
	 
	 struct student s2;
	 s2.roll = 63;
	 s2.cgpa= 8.20;
	 strcpy(s2.name , "sushant");
	 
	 printf("student name :%s \n",s2.name );
	 printf("student roll no. :%d\n", s2.roll);
	 printf("student's cgpa : %f \n \n ", s2.cgpa);
	
	struct student s3;
	 s3.roll = 64;
	 s3.cgpa= 7.20;
	 strcpy(s3.name , "nair");
	 
	 printf("student name :%s \n",s3.name );
	 printf("student roll no. :%d\n", s3.roll);
	 printf("student's cgpa : %f \n \n", s3.cgpa);
	

}

