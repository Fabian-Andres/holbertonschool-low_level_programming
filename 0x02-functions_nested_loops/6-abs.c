#include "holberton.h"
/**
* _abs - Print absolute
* @n: The character to print
*
* Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
