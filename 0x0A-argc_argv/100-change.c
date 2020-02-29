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
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i, val_argv, coins; /** Index, coins */
	int nums[] = {25, 10, 5, 2, 1};


	if (!argv[1])
	{
		printf("Error\n");
		return (1);
	}

	val_argv = atoi(argv[1]);
	if (val_argv <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (nums[0] == val_argv)
	{
		printf("1\n");
		return (0);
	}

	
	

	printf("%d\n", coins);
	return (0);
}
