#include <stdio.h>

#include<stdlib.h>
int main() 
{
    int *ptr;
    int n;
    printf("Enter number: ");
    scanf("%d ", &n);
    ptr= (int *) calloc(n, sizeof(int));
//    ptr[0]= 1;
//    ptr[1]= 4;
//    ptr[2]= 6;
//    ptr[3]= 8;
//    ptr[4]= 9;

    
    for(int i=0; i<n; i++)
    {
    	printf("%d\n ", ptr[i]);
	}
	return 0;
}
