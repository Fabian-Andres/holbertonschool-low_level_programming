#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Function.
 *
 * @a: Value string
 * @n: Value array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	putchar('\n');
}
