#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum function.
 *
 * @n: const n
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list agt;
	unsigned int i;
	int sum = 0;

	va_start(agt, n);
	if (n == 0)
	{
		va_end(agt);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(agt, int);
	}
	va_end(agt);
	return (sum);
}
