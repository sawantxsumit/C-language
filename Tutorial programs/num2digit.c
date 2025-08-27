#include<stdio.h>

int main()
{
    //program to write the given number by user into words
    int n,d=0, r=0;
    printf("enter a number :");
    scanf("%d", &n);

while(n>0)//to reverse the number
{
   d=n%10;
   r=r*10+d;
   n=n/10;
}
    while(r>0)
    {
      d=r%10;
      r/=10;
      switch(d)
      {
        case 0: printf("zero ");
        break;
        case 1: printf("one ");
        break;
        case 2: printf("two ");
        break;
        case 3: printf("three ");
        break;
        case 4: printf("four ");
        break;
        case 5: printf("five ");
        break;
        case 6: printf("six ");
        break;
        case 7: printf("seven ");
        break;
        case 8: printf("eight ");
        break;
        case 9: printf("nine ");
        break;
      }
    }
    return 0;
}