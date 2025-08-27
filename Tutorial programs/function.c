#include<stdio.h>
void india()
{
    printf("you are an indian \n");
}
void australia()
{
    printf("you are an australian\n");
}
void england()
{
    printf("you are a british\n");
    india();
}
int main()
{
  india();
  england();
  return 0;
}