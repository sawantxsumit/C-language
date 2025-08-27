#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() 
{
    float *ptr;
    ptr= (float *) malloc(5*sizeof(float));
    ptr[0]= 1;
    ptr[1]= 4;
    ptr[2]= 6;
    ptr[3]= 8;
    ptr[4]= 9;

    
    for(int i=0; i<5; i++)
    {
    	printf("%f\n ", ptr[i]);
	}
	return 0;
}
