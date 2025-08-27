#include <stdio.h>
#include<math.h>
//to convert celcius into fahrenheit
float converttemp(float celcius);

int main() {
	float n;
	printf("enter temp in celcius :");
	scanf("%f", &n);
     float far = converttemp(n);
     printf("temp in far is: %f", far);
     return 0;
}


float converttemp(float celcius) {
	float far = celcius * (9/5) + 32;
	return far;
}




