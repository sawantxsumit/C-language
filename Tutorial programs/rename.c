// C program to demonstrate use of rename()
#include <stdio.h>

int main()
{
	// Old file name
	char old_name[] = "student.txt";

	char new_name[] = "studentnew.txt";
	int value;

	// File name is changed here
	value = rename(old_name, new_name);

	if (!value) {
		printf( "File name changed successfully");
	}
	else {
		perror("error");
	}
	return 0;
}
