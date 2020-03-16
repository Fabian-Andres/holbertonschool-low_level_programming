#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * chara - function character
 * @arg: Holds the va_list
 * Return: nithing.
 */
void chara(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * integ - function integers
 * @arg: const
 * Return: nithing.
 */
void integ(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * floa - function floats
 * @arg: const
 * Return: nithing.
 */
void floa(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * str - function string
 * @arg: const
 * Return: nithing.
 */
void str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == 0)
	{
		s = "(nil)";
	}
	printf("%s", s);

}
/**
 * print_all - prints anything that is sent
 * @format: Holds a string, each character points to a type of data
 * @...: Holds all the arguments
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list strg;
	typ typin[] = {
		{"c", chara},
		{"i", integ},
		{"f", floa},
		{"s", str},
		{0, 0}
	};

	char *s1 = "", *s2 = ", ";

	i = 0;
	va_start(strg, format);
	while (format != 0 && format[i] != 0)
	{
		j = 0;
		while (typin[j].op != 0)
		{
			if (typin[j].op[0] == format[i])
			{
				printf("%s", s1);
				typin[j].f(strg);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(strg);
}
