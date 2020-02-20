#include <stdio.h>
/**
 * reverse_array - Function.
 *
 * @a: Value
 * @n: Value
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, cant;
	int new_arr[1000];

	cant = n;

	for (i = 0; i < n; i++)
	{
		cant--;
		new_arr[cant] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = new_arr[i];
	}
}
