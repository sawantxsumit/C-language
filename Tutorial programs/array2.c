#include<stdio.h>

int main()
{
   int marks[10]={23,45,34,65,55,34,43,23,33,55};
   for(int i=0; i<=9; i++)
   {
    // printf("enter the marks of student %d :", i+1);
    // scanf("%d", &marks[i]);
   
   if(marks[i]<35)
   {
     printf("%d %d\n",i+1, marks[i]);
   }
   }
    return 0;

}