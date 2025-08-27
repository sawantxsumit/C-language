#include <stdio.h>
#include<math.h>
int percentage ( int science ,int math , int sanskrit);
int main() 
{
	int sc = 90;
	int math= 80;
	int sans = 70;
	printf(" percentage is %d", percentage(sc, math ,sans));
	return 0;	
}
int percentage (int science ,int math , int sanskrit) 
{
//	int result = (science + math + sanskrit)/300;
	//printf("Your percentage is : %d", result );
	return (science + math + sanskrit)/3;
}
