#include <stdio.h>
/**
 * main - Function
 *
 * @argc: argc value
 * @c: c Unused
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char **c)
{
	int i;

	for (i = 0; i < argc; i++)
		;

	printf("%i\n", --i);

	return (0);
}
