#include<stdio.h>

int main()
{
    int arr[3][4]={1,0,1,1,0,1,0,1,1,0,0,1};
    int maxcount=0;
    int maxid=-1;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0; i<3;i++)
    {
        int count=0;
        for(int j=0; j<4;j++)
        {
           if(arr[i][j]==1) count++;
        }
        if(maxcount<count) 
        {
            maxcount=count;
            maxid=i;
        }
    }
    printf("the max number of one is %d in the row %d",maxcount, maxid+1);
    return 0;
}