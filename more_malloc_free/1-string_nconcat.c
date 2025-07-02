#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int s1_len, s2_len, i, j;
    char *concat;

    for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
    {

    }
    for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
    {

    }

    if (n < s2_len)
        s2_len = n;

    concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (concat == NULL)
        return (NULL);
    
    for (i = 0; s1[i] != '\0'; i++)
        concat[i] = s1[i];

    for (j =0; j < n || s2[j] != '\0'; j++)
        concat[i+j] = s2[j];

    concat[i+j] = '\0';

    return (concat);
}