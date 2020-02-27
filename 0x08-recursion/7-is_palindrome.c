#include <stdio.h>

/**
 * _print_rev_recursion - Function puts
 *
 * @s: Pointer od array
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	char a, b;

	if (*s != '\0')
	{
		a = *s;
		is_palindrome(s + 1);
		b = *s;
		printf("s - %c, ab (%c %c) \n", *s, a, b );
		if (a == b)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
