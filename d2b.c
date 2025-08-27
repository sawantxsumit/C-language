#include<stdio.h>

int main()
{  
    int decimal, binary=0, rem=0,x,rev;
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
         while(binary>0)
    {
        rev=rev+ (binary%10);
        rev=rev*10;
        binary=binary/10;
    }
        if(x%2==1)
        {
            printf("The binary number for the given decimal number is %d", rev/10);
        }
        else printf("The binary number for the given decimal number is %d", rev);
        
}