#include "stdio.h"
#include "string.h"
#include "ctype.h"

int countKeyChanges(char *s)
{
    int size = strlen(s);

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (tolower(s[i]) != tolower(s[i + 1]))
            count++;
    }

    return count - 1;
}