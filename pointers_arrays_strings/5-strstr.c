#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
    int j, i;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if ( haystack[i+j] != needle[j])
            {
                break;
            }
        }
        if ( needle[j] == '\0')
        {
            return (&haystack[i]);
        }
    }
    return (NULL);
}
