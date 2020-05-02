#include "lists.h"

/**
 * print_dlistint - fucntion to print dlist
 *
 * @h: head doubly linked list
 * Return: number o.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
