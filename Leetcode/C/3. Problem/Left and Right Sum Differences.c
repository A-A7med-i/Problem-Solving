#include "stdio.h"
#include "stdlib.h"

int *leftRightDifference(int *nums, int numsSize, int *returnSize)
{

    int *leftSum = (int *)malloc(numsSize * sizeof(int));
    int *rightSum = (int *)malloc(numsSize * sizeof(int));
    int *result = (int *)malloc(numsSize * sizeof(int));

    leftSum[0] = 0;
    rightSum[numsSize - 1] = 0;

    for (int i = 1; i < numsSize; i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    for (int i = numsSize - 2; i >= 0; i--)
    {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < numsSize; i++)
    {
        result[i] = abs(leftSum[i] - rightSum[i]);
    }

    return result;
}