#include "stdio.h"
#include <stdbool.h>

bool canAliceWin(int *nums, int numsSize)
{

    int singleSum = 0;

    int doubleSum = 0;

    int *i = nums;

    for (; i != nums + numsSize;)
    {
        if (*i < 10)
        {
            singleSum += *i;
        }

        else
        {
            doubleSum += *i;
        }

        ++i;
    }

    return (singleSum > doubleSum) || (doubleSum > singleSum);
}