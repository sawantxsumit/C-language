#include <stdio.h>
#include <string.h>

int main() 
{
	FILE *fptr;
	fptr = fopen("typedef.c", "r");
//	if(fptr == NULL)
//	{
//		printf("file does'nt exist");
//	}else 
//	{
//		fclose(fptr);
//	}
char ch[100];
fscanf(fptr , "%s", &ch);
printf("%s ", ch);

fclose(fptr);
	return 0;
}

