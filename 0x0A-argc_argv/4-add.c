#include <stdio.h>

/**
 * _isdigit - Prototype function
 *
 * @str: str value
 * Return: Always 0.
 */
int _isdigit(char *str);

/**
 * main - Function
 *
 * @argc: argc value
 * @argv: argv Unused
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * _isdigit - Function
 *
 * @str: str value
 * Return: Always 0.
 */
int _isdigit(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (1);
		}
		str++;
	}

	return (0);
}
