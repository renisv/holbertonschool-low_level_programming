#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing acceptable characters
 *
 * Description: Calculates the length of the initial segment of 's' which
 *              consists entirely of characters in 'accept'.
 *
 * Return: number of bytes in the initial segment of 's' containing only
 *         characters from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            break;
        }
    }

    return (count);
}
