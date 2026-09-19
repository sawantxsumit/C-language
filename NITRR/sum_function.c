#include<stdio.h>
#include<stdlib.h>

// Argument with no return
void sum(int a,int b){
     printf("Sum of %d and %d is %d" , a ,b, a+b);
}

// Argument with return
int sum(int a,int b){
    return a+b;
}

//NO argument No return
void sum(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d", &a,&b);
    printf("Sum of %d and %d is %d" , a ,b, a+b);
    
}

// No argument with return
int sum(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d", &a,&b);
    return a+b;
}
int main()
{
    printf("Argument with no return ");
    sum(3,5);
return 0;
}