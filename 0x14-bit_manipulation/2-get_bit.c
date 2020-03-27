#include "holberton.h"

/**
 * get_bit - function get index bit.
 *
 * @n: number
 * @index: position index to get.
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
