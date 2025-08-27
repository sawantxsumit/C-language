#include <stdio.h>
#include<math.h>

int fact(int n);

int main() {
	printf("factorial is : %d" , fact(5));
}

int fact (int n){
	if(n==0){
		return 1;
	}
int factnm1 = fact(n-1);
int factn = factnm1 * n;
return factn;
}


