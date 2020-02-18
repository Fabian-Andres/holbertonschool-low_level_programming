#include "holberton.h"

/**
 * puts_half - Function.
 *
 * @str: Value s
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, n;

	n = (length_of_the_string - 1) / 2

	for (i = n; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
