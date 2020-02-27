#include "holberton.h"

/**
 * _sqrt_recursion - Function recursion
 *
 * @n: Value n
 * @i: Value i
 * Return: Always 0.
 */

int _sqrt2(int i, int n);

int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt2(i, n));
}

/**
 * _sqrt2 - Function sqrt2
 *
 * @n: Value n
 * @i: Value i
 * Return: Always 0.
 */
int _sqrt2(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt2(i, n));

}
