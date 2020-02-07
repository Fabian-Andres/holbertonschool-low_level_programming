#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, last;

	for (i = 0; i <= 89; i++)
	{
		last = i % 10;
		if (last != 0 && last != 1)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if(i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
