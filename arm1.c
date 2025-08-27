#include<stdio.h>

int main()
{//to print the armstrong number between 1 to 500
int d=1, num=0, n=153;

for(int i=1; i<=10; i++)
{

        d=n%10;
        n=n/10;
        num=num +(d*d*d);
       // printf("%d", num);
		
}
		printf("%d",num);
//  for(int i=1 ; i<=500 ; i++)
//  {
//     if(i==num)
//     {
//         printf("%d is an armstrong number\n", i);
//     }
//  }
return 0;
}
