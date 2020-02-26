#include <stdio.h>
/**
 * print_diagsums - Function.
 *
 * @a: Value
 * @size: Size array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, y; /** Counters */
	int opr1 = 0, opr2 = 0;/** Operators */


	for (i = 0; i < size; i++)
	{
		opr1 += a[(size + 1) * i];
	}
	for (y = 0; y < size; y++)
	{
		opr2 += a[(size - 1) * (y + 1)];
	}
	printf("%d, %d\n", opr1, opr2);

}
