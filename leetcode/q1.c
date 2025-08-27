#include <stdio.h>
#include<stdlib.h>
int *sum(int *nums, int numSize, int target , int *returnSize)
{
    int *result= (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numSize; i++)
    {
        for (int j = i+1; j < numSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize=2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
int main()
{
    int nums[] = {3,3};
    int target = 6;
    int size= sizeof(nums)/sizeof(nums[0]);
    int *res = sum(nums,size, target, 2);
    printf("the indices are %d %d ", *res, *(res + 1));

    return 0;
}