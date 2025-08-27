#include<stdio.h>
#include<ctype.h>
int main()
{ 
    int r,c;
    printf("Enter the number of rows :");
    scanf("%d", &r);
    printf("Enter the number of columns :");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe given matrix is \n");

     for(int i=0; i<r;i++)
    {
        for(int j=0; j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
printf("\n");

for(int i=0; i<c;i++)
    {
        for(int j=0; j<r;j++)
        {
            int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
           printf("%d ", arr[j][i]);
        }
        printf("\n");
    } 
   return 0;
}

