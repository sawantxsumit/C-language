// WAP to convert a given string from upper to lower case and lower to upper case

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[100];
   printf("Enter the string :");
   fgets(str , sizeof(str) , stdin);

   printf("Original String :%s\n", str);
   char chr;
   int j=0;

   while (str[j])
   { 
    chr= str[j];
    putchar(tolower(chr));
    j++;
     
   }
//    printf("To lower case : %c", (str) );
   
   
//    printf("To upper case : %c", toupper(str) );
return 0;
}