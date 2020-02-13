#include "holberton.h"
/**
 * print_diagonal - function
 *
 * @n: number
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int line, row;

	for (line = 0; line < n; line++)
	{
		for (row = 0; row < line; row++)
		{
			if (n > 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
