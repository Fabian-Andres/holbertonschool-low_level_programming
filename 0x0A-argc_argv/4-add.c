#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
		if (!isdigit(*argv[i]))
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
