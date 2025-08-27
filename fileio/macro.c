#include<stdio.h>

#define pi 3.14159265359
// float area(float r)
// {
//    return pi*r*r;
// }
#define area(r) (pi*r*r) //function can be defined this way when the return type is like this this is called a macro function
int main()
{
    double x = 3.141565932;
    printf("%.10f\n", x);
    //float stores till 6 decimal places only 
    //%.10f upto 10 decimal places we can specify digits length in place of 10
    // double -- 15 decimal places
    printf("%f", area(5.3));
    return 0;
}