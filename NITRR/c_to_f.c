#include <stdio.h>
#include<math.h>
//to convert celcius into fahrenheit

int main() {
	float n;
	printf("enter temp in celcius :");
	scanf("%f", &n);
    float far = n * (9/5) + 32;
	
     printf("temp in far is: %f", far);
     return 0;
}





