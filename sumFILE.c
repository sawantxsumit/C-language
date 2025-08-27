#include <stdio.h>
#include <string.h>

int main() 
{
	FILE *fptr;
	fptr = fopen("student.txt", "r");
	
	int a;
	fscanf(fptr, "%d", &a);
	int b;
	fscanf(fptr, "%d", &b);
	 fclose(fptr);
	 
	fptr =fopen("student.txt", "w");
	fprintf(fptr , " sum is :%d" , a+b);
	
	fclose(fptr);
}
