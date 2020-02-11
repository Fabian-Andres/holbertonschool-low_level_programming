#include "holberton.h"
/**
* _isalpha - Is lowercase function
* @c: The character to print
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
