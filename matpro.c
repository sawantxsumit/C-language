#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int r1 , r2 , c1 ,c2 , res_r, res_c, i , j ,k;
  //  clrscr();
    int mat1[r1][c1] , mat2[r2][c2] , res[res_r][res_c];
    printf("enter the number of rows for matrix 1 :");
    scanf("%d", &r1);
    printf("enter the number of columns for matrix 1 :");
    scanf("%d", &c1);
    printf("enter the number of rows for matrix 2 :");
    scanf("%d", &r2);
    printf("enter the number of columns for matrix 2 :");
    scanf("%d", &c2);


    if(c1 != r2)
    {
        printf("the number of columns in the first matrix must be equal to the number of rows in second matrix \n");
        exit(0);
    }

    printf("Enter the elements of the first matrix :\n");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        
    }
    printf("Enter the elements of the second matrix :\n");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        
    }

    for ( i = 0; i < res_r; i++)
    {
    	j=0;
        for ( j = 0; j < res_c; j++)
        {
            res[i][j]=0;
            for ( k = 0; k < res_c; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }
        
    }
    
 printf("The resultant matrix is :\n");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d", &res[i][j]);
        }
        
    }

    return 0;
}
