#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr_head=(int*) calloc(2,sizeof(int));
   // int* ptr = ptr_head;
    ptr_head++;
    free(ptr_head);
    return 0;
}