#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum function.
 *
 * @n: Const n
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);
	unsigned int sum = 0, i = 0;

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
