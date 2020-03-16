#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print numbers
 *
 * @separator: separator
 * @n: const n
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c == NULL)
			printf("nil");
		else
			printf("%s", c);
		if (!separator || i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
