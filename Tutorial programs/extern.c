#include<stdio.h>
//#include<FILE2.C>
//extern storage class
int x;
void print(void);
int main()
{
    x=10;
    printf("\n x in FILE1 = %d", x);
    print();
    return 0;
}

#include<stdio.h>

extern int x;
void print()
{
    printf("\n x in FILE2 = %d", x);

}
 
