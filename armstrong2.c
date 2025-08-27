#include<stdio.h>

int main()
{
  int num, et,i=1 ;
  printf("enter a number :");
  scanf("%d", &num);
  printf("enter ending term :");
  scanf("%d", &et);
  while(i<=et)
  {
   printf("%d*%d = %d\n",num,i,num*i);
   i++;
  }
return 0;
}