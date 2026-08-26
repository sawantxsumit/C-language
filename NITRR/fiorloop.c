#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int i=0;
    // for (;;)
    // {
    //   if(i==10){
    //     break;
    //   }   
    //   printf("%d\n", i++);
    // }
    int count=0;

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d\n", j);
            count+=1;
        }
        
    }
    printf("%d", count);
    
    
return 0;
}