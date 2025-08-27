#include<stdio.h>

// ques -- array[n+1] with elements from 1 to n ... find duplicate number

int main()
{

    int arr[6]={1,2,3,4,5,4};
    int num=0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
           if (arr[i]==arr[j])
        {
           num=arr[i];
           printf("the duplicate number is %d", num);
           break;
        }  
        }
    }
    
return 0;
}