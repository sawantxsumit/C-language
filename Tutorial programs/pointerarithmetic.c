#include <stdio.h>

int main() 
{
//	int age =22; 
//	int *ptr = &age;
//	printf("%u \n", ptr);
//	ptr++; // byte increaes by 4
//	printf("%u \n", ptr);
//	ptr--;
//	printf("%u", ptr);
//float price=20.00;
//float *ptr = &price;
//printf("%u \n", ptr);
//ptr++;
//printf("%u \n", ptr);
//ptr--;
//printf("%u \n", ptr);
//char star = '*';
//char *ptr = &star;
//printf("%u \n", ptr);
//ptr++;
//printf("%u \n", ptr);
//ptr--;
//printf("%u \n", ptr);
int age = 22;
int _age= 23;
int *ptr = &age;
int *_ptr = &_age;

printf("difference = %u \n", ptr - _ptr);// we can subtract pointers
_ptr = &age;
printf("comparison = %u \n", _ptr==ptr );//we can compare pointers
}

