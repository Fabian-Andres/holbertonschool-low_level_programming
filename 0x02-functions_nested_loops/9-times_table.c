#include "holberton.h"
/**
* times_table - Function print table
*
*/
void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			n3 = n2 * n1;

			if ((n3 / 10) != 0)
			{
				_putchar((n3 / 10) + '0');
			}
			else if (n2 != 0)
			{
				_putchar(' ');
			}

			_putchar((n3 % 10) + '0');

			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
