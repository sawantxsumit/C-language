# include <stdio.h>
int main() 
//program to read numbers until user inputs -1. also count the numbers of neg , pos and zeroes entered by the user
{
 int num;
 int negative =0 , positive = 0 , zeroes = 0;
 printf("enter -1 to exit \n");
 printf("enter any number :");
 scanf("%d", &num);

 while(num != -1)
 {
    if (num>0)
     positive++;
    else if (num==0)
     zeroes++;
    else 
        negative++;   
     printf("enter any number :");
 scanf("%d", &num);  
        }
        printf("positive number entered are %d\n", positive);
         printf("negative number entered are %d\n", negative);
          printf("zeroes entered are %d\n", zeroes);

    }
    
