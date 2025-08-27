//#include<stdio.h>
//auto integer classes
// void func1()
// {
//     int a=10;
//     printf("\n a= %d", a);
//     //auto integer iocal to func1
// }
// void func2()
// {
//     int a=20;
//     printf("\n a= %d", a);
//     //auto integer local to func2
// }

// void main()
// {
//     int a=30;
//     func1();
//     func2();
//     printf("\n a= %d", a);

// }
// C Program To Reverse a Sentence Using Recursion
#include <stdio.h>
void reverse(){
    char c;
    
    // Asking for Input
    scanf("%c", &c);
    if (c != '\n'){
        reverse();
        printf("%c", c);
    }
}

int main(){
    printf("Enter a Sentence: \n");
    reverse();
    return 0;
}