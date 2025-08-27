#include <stdio.h>
#include <string.h>

int main() 
{
	FILE *fptr;
	fptr = fopen("student.txt", "w");
	
	char name[100];
	int age;
	float cgpa;
	
	printf("enter name :");
	scanf("%s", name);
	printf("enter age :");
	scanf("%d", &age);	
	printf("enter cgpa :");
	scanf("%f", &cgpa);
	
	fprintf(fptr , "%s\t", name );
	fprintf(fptr , "%d\t", age );
	fprintf(fptr , "%f\t", cgpa );
	
//	char ch;
//	ch = fgetc(fptr);
//	while (ch != EOF)
//	{
//		printf("%c", ch);
//		ch= fgetc(fptr);
//	} printf("\n");
//	fputc('m', fptr);
//	fputc('i', fptr);
//	fputc('g', fptr);
//	fputc('h', fptr);
//	fputc('t', fptr);
//	printf("%c\n", fgetc(fptr));
//    printf("%c\n", fgetc(fptr));	
//	printf("%c\n", fgetc(fptr));
//	printf("%c\n", fgetc(fptr));
//	printf("%c\n", fgetc(fptr));
//	fprintf(fptr, "%c", 'a' );
//	fprintf(fptr, "%c", 'n' );
//	fprintf(fptr, "%c", 'g' );
//	fprintf(fptr, "%c", 'a' );
	fclose(fptr);
	return 0;
}

