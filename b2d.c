#include<stdio.h>
#include<math.h>

int rev(int n)
{
    int s=0;
    while(n>0)
 { 
    int r=0;
  r=n%10;
  n=n/10;
  s= s*10+r;
  }
  return s;
}
int main()
{
        int decimal=0, rem , binary=0,i=0;
        char ch;
        printf("To convert from decimal to binary enter d\nTo convert from binary to decimal enter b :");
        scanf("%c", &ch);

        if(ch=='b'){
        printf("Enter a binary number :");
        scanf("%d", &binary);
        while(binary!=0)
        {
            rem=binary%10;
            decimal+= rem*pow(2,i);
            binary/=10;
            i++;
        }
        printf("The decimal no for the given binary number is %d", decimal);
        }


        else if(ch=='d')
        {
           int decimal, binary=0, rem=0,x;
    printf("Enter a decimal number :");
    scanf("%d", &decimal);
    x=decimal;
        while(decimal!=0)
        {
            rem=decimal%2;
            binary+= rem*10;
            binary*=10;
            decimal=decimal/2;
        } 
        if(x%2==1)
        {
            printf("The binary number for the given decimal number is %d", rev(binary)/100);
        }
        else printf("The binary number for the given decimal number is %d", rev(binary)/10); 
        }

        else printf("Invalid input!");
        return 0;
}