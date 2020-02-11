#include "holberton.h"
/**
* print_last_digit - Print absolute
* @n: The character to print
*
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int last, mult;

	last = n % 10;

	if (n < 0)
	{
		mult = last * -1;
		_putchar(mult + '0');
		return (mult);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
