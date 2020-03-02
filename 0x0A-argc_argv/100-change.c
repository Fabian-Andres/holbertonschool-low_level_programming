#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 *
 * @argc: argc value
 * @argv: argv Unused
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, money, change;
	int coin[] = {25, 10, 5, 2, 1};

	change = 0;
	money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (money != 0)
	{
		for (i = 0; i <= 5; i++)
		{
			if (money > coin[i])
			{
				money -= coin[i];
				change++;
				break;
			}
			if ((money % coin[i]) == 0)
			{
				money -= coin[i];
				change++;
				break;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
