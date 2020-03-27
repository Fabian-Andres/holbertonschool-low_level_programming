#include "holberton.h"

/**
 * set_bit - function set index bit.
 *
 * @n: addres number
 * @index: position index to set.
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
