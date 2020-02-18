#include "holberton.h"

/**
 * print_rev - Function.
 *
 * @s: Value s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int p, i;

	for (p = 0; s[p] != '\0'; p++)
	{
	}
	for (i = (p - 1); s[i] > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
