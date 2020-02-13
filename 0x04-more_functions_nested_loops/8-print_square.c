#include "holberton.h"
/**
 * print_square - function
 *
 * @size: number
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int line, row;

	for (line = 0; line < size; line++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
