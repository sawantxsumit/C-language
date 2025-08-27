#include<stdio.h>

void main()
{
   int x=4, y,z;
   y=--x;// --x is pre decrement operator therefore it will first decrease the value of x then store it in y i.e. x=3 and y=3
   z=x--;// x-- is post decrement operator therefore z will first store the value of x then decrease the value of x by 1 i.e. z=3 amd x=2
   printf("\n%d\t%d\t%d", x,y,z);
}