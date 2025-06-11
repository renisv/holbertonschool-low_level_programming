#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: Uses nested loops to print a-z 10 times
 * Only uses _putchar twice in the entire function
 */

void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
