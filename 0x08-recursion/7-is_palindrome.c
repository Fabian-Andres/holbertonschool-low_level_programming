#include "holberton.h"
/**
 * is_palindrome - Function
 *
 * @s: Pointer of array
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int x = 1, y;

	y = _strlen_recursion(s);

	return (_compare(s, x, y));
}
/**
 * _compare - Function
 *
 * @s: Pointer of array
 * @x: Position 0
 * @y: Length
 * Return: Always 0.
 */
int _compare(char *s, int x, int y)
{
	if (x >= y)
	{
		if (s[x] == s[y])
			return (_compare(s, x + 1, y - 1));
		else
			return (0);
	}

	return (1);
}
/**
 * _strlen_recursion - Function puts
 *
 * @s: Pointer od array
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
