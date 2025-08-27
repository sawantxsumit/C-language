#include<stdio.h>
#include<limits.h>
int main()
{
    int a , b ;
    int arr[5] = {1,34 ,12, 445 ,65};
    a= arr[0];
    b= arr[1];
    for(int i=0; i<5 ; i++)
    {
        if(arr[i]>b && arr[i]>a)
        {
            b=a;
            a= arr[i];
        }
    }//wrong
    printf("largest = %d and second largest = %d",a,b );
return 0;
}