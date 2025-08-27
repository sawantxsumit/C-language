#include<stdio.h>

int main()
{
	int age;
	printf("enter your age :");
	scanf("%d", &age);
	age <= 19 ? printf("you're a teenager ") : printf("you are an adult");
	return 0;
}
