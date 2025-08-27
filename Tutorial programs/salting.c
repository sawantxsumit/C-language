#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main() 
{
	char password[100];
	printf("enter your password: ");
	scanf("%s",password);
	salting(password);

}

void salting(char password[])
{
	char salt[]="123";
	char newpassword[200];
	
	strcpy(newpassword, password);
	strcat(newpassword , salt);
	puts(newpassword);
	
}
