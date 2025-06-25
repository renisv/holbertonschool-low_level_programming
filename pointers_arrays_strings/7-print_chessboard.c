#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: Prints an 8x8 chessboard to standard output.
 *              Each row is printed on a new line.
 */
void print_chessboard(char (*a)[8])
{
    unsigned int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}
