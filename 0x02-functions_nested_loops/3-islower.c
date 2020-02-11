#include "holberton.h"
/**
* _islower - Is lowercase function
* @c: The character to print
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
