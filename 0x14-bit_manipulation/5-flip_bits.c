#include "holberton.h"

/**
 * flip_bits - function flip bits.
 *
 * @n: addres number
 * @m: m.
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		++b;
	}
	return (b);
}
