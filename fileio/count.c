#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter  a string :");
    fgets(str , 100 , stdin);

    int i=0,countv=0, countc=0, counts=0;
    while(str[i] != '\0')
    {
        if(str[i] =='a' || str[i] =='e' ||str[i] =='i' || str[i] =='o' || str[i] =='u')
        {
            countv++;
        }
        else if(str[i] == ' ') 
        {
            counts++;
            countc++;
        }
        else countc++;
        i++;
    }
    printf("%d\n", countc);
    printf("\nnumber of vowels = %d", countv);
    printf("\nnumber of consonants = %d", countc - counts);
    
    return 0;
}