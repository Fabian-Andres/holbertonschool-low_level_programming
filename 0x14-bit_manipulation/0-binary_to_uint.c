#include "holberton.h"
/**
 * binary_to_uint - function convert binary to uint.
 *
 * @b: variable to convert.
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, num = 0, aux_mult = 0, aux_const = 2;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		num = b[i] - '0';
		if (num != 0 && num != 1)
			return (0);
		aux_mult = (aux_const * aux_mult) + num;
		i++;
	}

	result = aux_mult;
	return (result);
}
