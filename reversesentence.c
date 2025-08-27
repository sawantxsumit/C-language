#include<stdio.h>
#include<string.h>

int reverse(char sentence[], int n);

int main()
{
    char sentence[]= "today is tuesday ";
    int n= sizeof(sentence) / sizeof(sentence[0]);

    printf("original sentence = %s\n", sentence);
    printf("reversed sentence \n");
    reverse(sentence , n-1);
    return 0;
}

int reverse(char sentence[], int n)
{
    if(n==0) return 0;
     else 
     {
        reverse(sentence , n-1);
        printf("%c", sentence[n-1]);
        return 1;
     }
}