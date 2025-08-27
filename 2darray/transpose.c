#include<stdio.h>
#include<ctype.h>
int main()
{ 
    int ch;
    do
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
int brr[c][r];
for(int i=0; i<c;i++)
    {
        for(int j=0; j<r;j++)
        {
            brr[i][j]=arr[j][i];
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    } 
printf("\nEnter 1 to run this code again\n press any key to exit ");
scanf("%d", &ch);
} while (ch==1);
   return 0;
}

