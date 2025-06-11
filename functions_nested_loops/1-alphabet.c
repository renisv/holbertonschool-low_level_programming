#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: Uses a while loop to print all lowercase letters a-z
 * Only uses _putchar twice in the entire function
 */


void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
