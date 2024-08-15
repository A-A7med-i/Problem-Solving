#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isGoodSubstring(char *subStr)
{
    if (subStr[0] == subStr[1] || subStr[0] == subStr[2] || subStr[1] == subStr[2])
        return false;

    return true;
}

int countGoodSubstrings(char *s)
{
    int size = strlen(s);
    int count = 0;

    for (int i = 0; i <= size - 3; i++)
    {
        if (isGoodSubstring(s + i))
            count++;
    }

    return count;
}
