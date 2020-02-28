#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 *
 * @argc: argc value
 * @c: c Unused
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mult;

	for (i = 0; i < argc; i++);

	if (i == 1 || i != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}

	return (0);
}
