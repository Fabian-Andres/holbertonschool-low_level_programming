#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, last, first;

	for (i = 0; i <= 89; i++)
	{
		first = i / 10;
		last = i % 10;
		if (first < last)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
