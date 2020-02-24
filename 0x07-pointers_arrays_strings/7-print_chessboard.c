#include "holberton.h"
/**
 * print_chessboard - Function.
 *
 * @a: Value
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, y; /** Counters */

	for (i = 0; i < 8; i++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar((a[i][y]));
		}
		_putchar('\n');
	}

}
