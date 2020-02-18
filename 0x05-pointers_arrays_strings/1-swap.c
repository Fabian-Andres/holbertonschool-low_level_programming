#include <stdio.h>

/**
 * swap_int - Function.
 *
 * @a: Value a
 * @b: Value b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int num_a, num_b;

	num_a = *a;
	num_b = *b;

	*a = num_b;
	*b = num_a;
}
