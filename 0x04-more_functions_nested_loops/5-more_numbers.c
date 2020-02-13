#include "holberton.h"
/**
 * more_numbers - function to multiply
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
