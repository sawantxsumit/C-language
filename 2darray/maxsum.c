#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[3][4] ={1,2,3,1,0,5,0,2,9,0,0,3};
    int sum=0,count=0,sum1=0;
    int maxsum=INT_MIN;
    int maxid=-1;
    printf("The given matrix is :\n");
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
       // sum1=maxsum;
        sum=0;
        for(int j=0; j<4;j++)
        {
           sum=sum+arr[i][j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            maxid=i;
        }
        printf("The sum of row %d is %d\n", i+1,sum);
    } 
    printf("the sum of row %d is greatest sum=%d",maxid+1,maxsum);


//    if(sum[2]>sum[1] && sum[2]>sum[0])
//    {
//     printf("the sum of row 3 is greatest sum=%d",sum[2]);
//    }
//    else if(sum[1]>sum[2] && sum[1]>sum[0])
//    {
//     printf("the sum of row 1 is greatest sum = %d", sum[1]);
//    }
//    else printf("the sum of row 1 is greatest sum=%d", sum[0]);

    return 0;
}