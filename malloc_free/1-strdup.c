#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
    char *dup;
    int length, i, j;
    if (str == NULL)
    {
        return (NULL);
    }

    for (i = 0; str[i] != '\0'; i++)
    {

    }
    length = i;

    dup = malloc(sizeof(char) * (length + 1));

    if (dup == NULL)
    {
        return (NULL);
    }
    for (j = 0; str[j] != '\0'; j++)
    {
        dup[j] = str[j];
    }
    dup[j] = '\0';
    
    return (dup);
}