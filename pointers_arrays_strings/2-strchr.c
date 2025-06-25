#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Description: Searches for the first occurrence of character 'c' in string 's'.
 *              The terminating null byte is considered part of the string.
 *
 * Return: pointer to the first occurrence of 'c' in 's',
 *         or NULL if 'c' is not found
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (&s[i]);
        }
    }

    /* Check for the null terminator if c is '\0' */
    if (c == '\0')
    {
        return (&s[i]);  /* Returns pointer to null terminator */
    }

    return (NULL);
}
