#include "holberton.h"

/**
 * print_binary - function convert int to binary.
 *
 * @n: number to convert.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
    unsigned int result = 0, aux_num = 0, aux_const = 1;
	int i = 0, y = 0, j, z;

	if (n == 0)
		_putchar('0');

    aux_num = n;
	while (aux_num != 0)
	{
		aux_num = aux_num >> aux_const;
		i++;
	}
    z = i;
    while (y < i)
    {
        aux_num = n;
        for (j = 0; j < z; j++)
        {
            result = (aux_num & 1) + '0';
            aux_num = aux_num >> 1;
        }
        _putchar(result);
        result = 0;
        z--;
        y++;
    }

}
