#include <stdio.h>
#include <string.h>

int main()
{
//	char name[]="sumit";
//	printf("length is :%d", strlen(name));//gives the lenght of name
//	char oldst[]= "sumit";
//	char newst[]= "sawant";
//	strcpy(newst, oldst);//exchanges the value
//	puts(newst);//prints sumit
//	char first[100]= "hello ";
//	char second[]= "world";
//	strcat(first, second);//concatanates two strings
//	puts(first);

//char first[]= "hhha";
//char second[]="hhhb";
//
//printf("%d",strcmp(first , second));//strcmp compares 2 strings if the first string is shorter
// than the second string it returns a negative value , 0 for equal , and positive for greater
//it only compares the first letter of the string and gives result on the basis of askai value assigned to each unique letter

//ques. Take a string input from user using %c
char str[100];
char ch;
int i = 0;

while(ch!= '\n')
{
	scanf("%c", &ch);
	str[i]= ch;
	i++;
}
str[i]='\0';
puts(str);
}
