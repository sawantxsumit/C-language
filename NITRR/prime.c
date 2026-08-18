#include<stdio.h>
#include<stdlib.h>
int main()
{
 int prime;
 int flag=0;
 printf("Enter a number :");
 scanf("%d",&prime);
 for (int i = 2; i <prime; i++)
 {
if (prime%i==0)
 {
    flag=1;
    break;
}
}
if (flag==0)
{  
    printf("The number is prime");
}
else{

    printf("The number is not prime");
}
return 0;

 }
 
 
 