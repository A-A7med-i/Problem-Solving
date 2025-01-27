#include "stdio.h"
#include "string.h"

char *removeTrailingZeros(char *num)
{
    int size = strlen(num);

    int i = size - 1;

    for (; i >= 0; i--)
    {
        if (num[i] != '0')
            break;
    }

    num[i + 1] = '\0';

    return num;
}
