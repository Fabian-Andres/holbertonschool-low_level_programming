#include "holberton.h"
/**
* print_alphabet - Print alphabet in for function
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
