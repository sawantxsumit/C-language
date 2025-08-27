#include <stdio.h>

int main() 
{
	int line;
	// to print a inverted triangle
	printf("enter  no of lines :");
	scanf("%d", &line);
	for (int i=1 ; i<=line ; i++)
	{
		for(int j=1; j<=i; j++ )
		{
			printf("* ");
		}
	printf("\n");	
    }
	for (int i=1 ; i<=line ; i++)
	{
		for(int j=1; j<=line+1-i ; j++ )
		{
			printf("* ");
		}
	printf("\n");	
    }
	return 0;
}

