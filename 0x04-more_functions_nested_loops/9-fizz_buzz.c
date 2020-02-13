#include <stdio.h>
#include "holberton.h"
/**
 * main - function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			if (n % 5)
			{
				printf("Fizz ");
			}
			else
			{
				printf("FizzBuzz ");
			}
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", n);
		}
	}

	printf("\n");

	return (0);
}
