#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 *
 * @argc: argc value
 * @argv: argv value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
