#include<stdio.h>

int main()
{

    int arr1[8] = {1, 2,3, 4, 5,55, 6,7 };
     int n = sizeof(arr1)/ sizeof(arr1[0]);
      
      printf("original array \n");
      for (int i = 0; i < n; i++)
      {
        printf(" %d ", arr1[i]);
      }
   
      
    int index, num;
    printf("\nenter the index :");
    scanf("%d", &index);
    printf("enter the number :");
    scanf("%d", &num);
    
    
     for (int i = n; i >=0; i--)
     {
        if (i<index)
        {
            continue;
        }
        else if(i==index)
        {
            arr1[i] = num;
        }
        else arr1[i] = arr1[i-1];
     }
     n++;
     for (int i = 0; i < n+1; i++)
     {
        printf(" %d ",arr1[i]);
     }
     
     
    return 0;
}