#include <stdio.h>
int main()
{
    int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[3][3] = {10, 11, 12, 13, 14, 15, 16, 17, 18};

    printf("matrix 1 = \n");
   
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", mat1[i][j]);
        }
        printf("]");
            printf("\n");
    }
        printf("matrix 2 = \n");
        for(int i=0; i<3; i++)
        {
            printf("[");
            for(int j=0 ; j<3 ; j++)
            {
                printf(" %d ", mat2[i][j]);
            }
            printf("]");
            printf("\n");
        }
        printf("the sum of these two matrices = \n");
    for(int i=0; i<3; i++)
        {
            printf("[");
            for(int j=0 ; j<3 ; j++)
            {
                printf(" %d ", mat1[i][j] + mat2[i][j]);
            }
            printf("]");
            printf("\n");
        }
    return 0;
}
