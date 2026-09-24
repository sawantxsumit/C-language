#include <stdio.h>
#include<math.h>
//to find factorial of a given no using recursive 
int fact(int n);

int main() {
	int n;
	printf("enter the number :");
	scanf("%d", &n);
	printf("factorial is : %d" , fact(n));
}

int fact (int n){
	if(n==0){
		return 1;
	}
int factnm1 = fact(n-1);
int factn = factnm1 * n;
return factn;
}


