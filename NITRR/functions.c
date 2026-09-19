#include<stdio.h>
#include<stdlib.h>

// Argument with No return
void greet(char name[]){
    printf("Hi %s How are you doing today! ", name);
}

// Argument with return


int main()
{
    char name[50];
    printf("Enter your name :");
    fgets(name , sizeof(name) , stdin);
    greet(name);
return 0;
}