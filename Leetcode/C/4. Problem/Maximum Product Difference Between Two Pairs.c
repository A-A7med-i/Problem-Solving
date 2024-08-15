#include "stdio.h"
#include "stdlib.h"

int cmp(void *a, void *b)
{
    return (*(int *)a - *(int *)b);
}

int maxProductDifference(int *nums, int numsSize)
{

    qsort(nums, numsSize, sizeof(int), cmp);

    return (nums[numsSize - 1] * nums[numsSize - 2]) - (nums[0] * nums[1]);
}