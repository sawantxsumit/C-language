#include <stdio.h>
#include<math.h>
//to find the sum of first n natural numbers using recursion
int sum(int n);

int main() {
	int num;
	printf("enter the number :");
	scanf("%d", &num);
	printf("sum is : %d",sum(num));
	return 0;
	
}




int sum (int n) {
	if(n==1){
		return 1;
	}
	int sumnm1 = sum(n-1); //sum of  1 to n
	int sumn = sumnm1 + n;
	return sumn;
}
