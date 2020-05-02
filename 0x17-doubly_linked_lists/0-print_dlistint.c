#include "lists.h"

/**
 * print_dlistint - fucntion to print dlist
 *
 * @dlistint_t: const dlist
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%u \n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
