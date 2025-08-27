#include <stdio.h>

int main() 
{
	// int line , star;
	// printf("enter no. of lines :");
	// scanf("%d",&line );
	// printf("enter no. of  stars in each line :");
    // scanf("%d", &star);
	// for (int j =1 ; j<= line; j++){
	// for (int i =1 ; i<=star ; i++){
	// 	printf("*");// this loop gives no of stars 
		
	// }printf("\n");//the main loop signifies no of lines
	// }
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
