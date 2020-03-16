#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: separator
 * @n: const n
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (n == 0)
	{
		va_end(list);
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && i == 0))
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
