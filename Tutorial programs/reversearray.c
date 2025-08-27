#include <stdio.h>
void reverse(int arr[], int n);
int print(int arr[], int n );
int main() 
{
  int array[] = { 1,2,3,4,5};
  reverse(array , 5);
  print(array , 5 );
  return 0;
}
int print(int arr[], int n)
{
	for(int i=0 ; i<n ; i++)
	{
		printf("%d \t", arr[i]);
	}
}

void reverse(int arr[], int n)
{
	for(int i=0 ; i<n/2 ; i++)
	{
		int first = arr[i];
		int last = arr[n-i-1];
		
		arr[i]= last;
		arr[n-i-1] = first;
		
	}
}
