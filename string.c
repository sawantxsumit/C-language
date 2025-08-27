#include <stdio.h>
#include <string.h>
void printstring(char arr[]);
int count(char arr[]);
int main() 
{
//char fullname[100];
//scanf("%s", fullname);
//printf("your full name is : %s ", fullname);
//fgets(fullname , 100 , stdin );
//puts(fullname);
//char *canchange = "hello world";
//puts(canchange);
//canchange = "hello";
//puts(canchange);

char name[100];
printf("enter your first name :");
fgets(name, 100, stdin);
printf("lenght is %d", count(name));
	return 0;
}
int count(char arr[]) 
{
	int countnum=0;
	for(int i=0; arr[i]!= '\0' ; i++)
	{
		countnum++;
	}
	return countnum-1;
}
void printstring(char arr[])
{
	for(int i =0;arr[i]!= '\0' ; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}
