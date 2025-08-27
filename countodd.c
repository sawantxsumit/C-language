#include <stdio.h>
int countodd(int arr[], int n);
//to count odd numbers in an array
int main() 
{
	int array[]= {1,2,3,4,5,6,7,33,65,12,87,456,23,12,32,34,43,54,34,88,357,90};
	printf("total odd numbers in this list is :%d", countodd(array, 22));
	
	return 0;
}

int countodd(int arr[], int n) 
{
	int count = 0;
	for(int i =0; i<n ; i++)
	{
		if(arr[i]%2 !=0)
		{
			count++;
		}
	}
	return count;
}
