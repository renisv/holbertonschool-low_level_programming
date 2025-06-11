#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */


int main(void)
{
char alphabet[] = {
	"abcdefghijklmnopqrstuvwxyz"
};
int i;

for (i = 25; i >= 0; i--)
{
putchar(alphabet[i]);
}
	putchar('\n');


return (0);
}
