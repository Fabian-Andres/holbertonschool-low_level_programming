#include "holberton.h"
/**
 * print_triangle - function
 *
 * @size: number
 * Return: Always 0 (Success)
 */


void print_triangle(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= (size - row); col++)
		{
			_putchar(' ');
		}
		for (col = ((size - row) + 1) ; col <= size; col++)
		{
			_putchar('#');
		}
		if (row != col)
		{
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
