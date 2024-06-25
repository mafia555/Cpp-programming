#include <stdbool.h>
#include "task41.h"

char* spaceCleaner(char str[])
{
    int write = 0;
    bool prevWasSpace = false;
    char* result = new char[MAX_LENGTH];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (!prevWasSpace)
            {
                result[write++] = ' ';
                prevWasSpace = true;
            }
        }
        else
        {
            result[write++] = str[i];
            prevWasSpace = false;
        }
    }
    result[write] = '\0';

    return result;
}
